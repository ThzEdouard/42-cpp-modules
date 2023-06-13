#include <iostream>
#include "ScalarConverter.hpp"
int	main(int argc, char *argv[])
{

	// if (argc == 0 || argc > 2)
	// 	return (std::cout << "Error use ./ex00 char" << std::endl, 0);
	std::string he = "42.42f";
	ScalarConverter::convert(he);
	return (0);
}