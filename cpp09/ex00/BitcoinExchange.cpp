#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(const std::string &filePath) : _btcValue(), _inputValue()
{
	std::string line;
	std::ifstream dataValue("data.csv");
	if (!dataValue.is_open()) {
		throw std::runtime_error("Error: could not open file");
	}
	while (std::getline(dataValue, line))
	{
		std::istringstream iss(line);
		std::string date;
		double value;
		if (std::getline(iss, date, ',') && iss >> value)
		{
			_btcValue.push_back(std::make_pair(date, value));
		}
	}
	dataValue.close();
	std::ifstream inputValue(filePath.c_str());
	if (!inputValue.is_open()) {
		throw std::runtime_error("Error: could not open file");
	}
	int i = 0;
	while (std::getline(inputValue, line))
	{
		std::istringstream iss(line);
		std::string date;
		double value = 0.0;
		if (std::getline(iss, date, '|') && iss >> value && i != 0)
		{
			date.erase(std::remove_if(date.begin(), date.end(), ::isspace), date.end());
			if (value < 0)
				date = "Error: not a positive number.";
			else if (value > 1000)
				date = "Error: too large a number.";
			else if (!date[0])
				date = "Error: too not date.";
			_inputValue.push_back(std::make_pair(date, value));
		}else if (i != 0)
		{
			date.erase(std::remove_if(date.begin(), date.end(), ::isspace), date.end());
			if (!date[0])
				date = "Error: too not date.";
			else
				date = "Error: bad input => " + date;
			_inputValue.push_back(std::make_pair(date, value));
		}
		i++;
	}
	inputValue.close();
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &ref) : _btcValue(ref._btcValue), _inputValue(ref._inputValue) {}
BitcoinExchange::~BitcoinExchange() {}
const BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &ref)
{
	if (this != &ref)
	{
		_btcValue = ref._btcValue;
		_inputValue = ref._inputValue;
	}
	return (*this);
}

void BitcoinExchange::display() const
{
	for (size_t i = 0; i < _inputValue.size(); ++i)
	{
		if (_inputValue[i].first.find("Error") != std::string::npos)
			std::cout << _inputValue[i].first << std::endl;
		else
			std::cout << _inputValue[i].first << " => " << _inputValue[i].second << " = " << calculbtc(_inputValue[i].first, _inputValue[i].second) << std::endl;
	}
}

double BitcoinExchange::calculbtc(const std::string &date, double value) const
{
	return (seachValue(date) * value);
}

double BitcoinExchange::seachValue(const std::string &date) const
{
	for (size_t i = 0; i < _btcValue.size(); ++i)
	{
		if (_btcValue[i].first >= date)
		{
			if (_btcValue[i].first > date)
				i--;
			return _btcValue[i].second;
		}
	}
	throw std::runtime_error("Error: no matching date found in the database");
}
