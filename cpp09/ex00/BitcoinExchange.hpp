#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>
# include <fstream>
# include <sstream>
# include <string>
# include <vector>
# include <exception>
# include <algorithm>

class BitcoinExchange
{
private:
	std::vector<std::pair<std::string, double> > _btcValue;
	std::vector<std::pair<std::string, double> > _inputValue;
public:
	BitcoinExchange(const std::string &);
	BitcoinExchange(const BitcoinExchange &);
	~BitcoinExchange();
	const BitcoinExchange &operator=(const BitcoinExchange &);

	void display() const;
	double	calculbtc(const std::string &date, double value) const;
	double	seachValue(const std::string &date) const;
};

#endif
