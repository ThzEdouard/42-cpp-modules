#include <iostream>
#include "BitcoinExchange.hpp"

int main(int argc, char *argv[])
{
	if (argc < 2 || argc > 2)
		return (std::cout << "Error : ./btc input.txt" << std::endl, 1);
	BitcoinExchange btc(argv[1]);
	btc.display();
	return (0);
}