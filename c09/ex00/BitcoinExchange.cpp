#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(const std::string &filePath) : _btcValue()
{
	std::ifstream inputFile(filePath.c_str());
	if (!inputFile.is_open()) {
		throw std::runtime_error("Error: could not open file");
	}
	std::string line;
	while (std::getline(inputFile, line))
	{
		std::istringstream iss(line);
		std::string date;
		float value;
		if (std::getline(iss, date, ',') && iss >> value)
			_btcValue[date] = value;
	}
	inputFile.close();
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &ref) : _btcValue(ref._btcValue) {}
BitcoinExchange::~BitcoinExchange() {}
const BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &ref)
{
	if (this != &ref)
		_btcValue = ref._btcValue;
	return (*this);
}

std::ostream &operator<<(std::ostream &os, BitcoinExchange const &ref)
{
	std::map<std::string, float>::const_iterator it;
	const std::map<std::string, float> &btcValue = ref.getBtcValue();
	for (it = btcValue.begin(); it != btcValue.end(); ++it) {
		os << it->first << " => " << it->second << " = " << std::endl;
	}
	return (os);
}