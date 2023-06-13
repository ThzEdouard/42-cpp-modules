#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(){}
ScalarConverter::ScalarConverter(const ScalarConverter &ref)
{
	*this = ref;
}
ScalarConverter::~ScalarConverter(){}
const ScalarConverter &ScalarConverter::operator=(const ScalarConverter &ref)
{
	if (this != &ref){}
	return *this;
}

void	ScalarConverter::convert(std::string &_argv)
{
	std::cout << "char: " << ScalarConverter::getConvertChar(_argv) << std::endl;
	std::cout << "int: " << ScalarConverter::getConvertInt(_argv) << std::endl;
	std::cout << "float: " << ScalarConverter::getConvertFloat(_argv) << std::endl;
	std::cout << "double: " << ScalarConverter::getConvertDouble(_argv) << std::endl;
}

char		ScalarConverter::getConvertChar(std::string &argv)
{
	//protection
	return (static_cast<char>(argv[0]));
}

int		ScalarConverter::getConvertInt(std::string &argv)
{
	try
	{
		for(int i = 0; i < argv.length(); i++)
		{
			if (!std::isdigit(argv[i]) && argv[i] != '-' && argv[i] != '+')
            {
                throw std::invalid_argument("Invalid argument: " + argv);
            }
		}
	}
	catch(const std::invalid_argument& e)
	{
		(void)e;
		std::cout << "Non displayable" ;
	}

	return (std::stoi(argv));
}

float	ScalarConverter::getConvertFloat(std::string &argv)
{
	return (std::stof(argv));
}
double	ScalarConverter::getConvertDouble(std::string &argv)
{
	return (std::stod(argv));
}
