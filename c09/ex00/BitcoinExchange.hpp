#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>
# include <fstream>
# include <sstream>
# include <string>
# include <map>
# include <exception>

class BitcoinExchange
{
private:
	std::map<std::string, float> _btcValue;
	std::map<std::string, float> _
public:
	BitcoinExchange(const std::string &);
	BitcoinExchange(const BitcoinExchange &);
	~BitcoinExchange();
	const BitcoinExchange &operator=(const BitcoinExchange &);

	const std::map<std::string, float> &getBtcValue() const
	{
		return _btcValue;
	}

};

std::ostream &operator<<(std::ostream &, BitcoinExchange const &);

#endif