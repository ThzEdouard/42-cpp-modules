#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(const std::string &argv) : _argv(argv){}
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
