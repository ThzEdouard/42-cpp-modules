#include "ScalarConverter.hpp"
#include <iostream>
#include <string>

int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		ScalarConverter convert(argv[1]);
		std::cout << convert;
	}else
		std::cout << "use ./ex00 argv" << std::endl;
	return (0);
}