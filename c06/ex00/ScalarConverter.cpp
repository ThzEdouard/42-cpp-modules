#include "ScalarConverter.hpp"

std::string ScalarConverter::_str;
char		ScalarConverter::_char;
int			ScalarConverter::_int;
float		ScalarConverter::_float;
double		ScalarConverter::_double;
bool		ScalarConverter::_unknown;
bool		ScalarConverter::_overflow;
bool		ScalarConverter::_mininff;
bool		ScalarConverter::_nan;
bool		ScalarConverter::_maxinff;

void ScalarConverter::convert(const std::string& str)
{
    ScalarConverter::_char = '\0';
    ScalarConverter::_int = 0;
    ScalarConverter::_float = 0.0f;
    ScalarConverter::_double = 0.0;

    ScalarConverter::_unknown = false;
    ScalarConverter::_overflow = false;

    ScalarConverter::_mininff = false;
    ScalarConverter::_nan = false;
    ScalarConverter::_maxinff = false;

    if (ScalarConverter::isChar(str))
        ScalarConverter::toChar(str);
    else if (ScalarConverter::isInt(str))
        ScalarConverter::toInt(str);
    else if (isFloat(str))
        ScalarConverter::toFloat(str);
    else if (isDouble(str))
        ScalarConverter::toDouble(str);
    else
	{
		ScalarConverter::_unknown = true;
	}
	if (ScalarConverter::getError())
    {
		ScalarConverter::writeError(std::cout);
		return;
    }
    ScalarConverter::writeChar(std::cout);
    ScalarConverter::writeInt(std::cout);
    ScalarConverter::writeFloat(std::cout);
    ScalarConverter::writeDouble(std::cout);
}

bool ScalarConverter::isChar(const std::string& str)
{
    if (str.length() != 1 || isdigit(str[0]) != 0)
        return false;
    return true;
}

bool ScalarConverter::isInt(const std::string& str)
{
    for (unsigned long i = 0; i < str.length(); i++)
    {
        if (i == 0 && (str[i] == '+' || str[i] == '-'))
            continue;
        else if (!isdigit(str[i]))
            return false;
    }
    return true;
}

bool ScalarConverter::isFloat(const std::string& str)
{
    int p = 0;

    if (str == "-inff" || str == "nanf" || str == "+inff")
        return true;
    if (str[str.length() - 1] != 'f')
        return false;
    for (unsigned long i = 0; i < str.length() - 1; i++)
    {
        if (i == 0 && (str[i] == '+' || str[i] == '-'))
            continue;
        else if (!isdigit(str[i]))
        {
            if (str[i] == '.' && ++p == 1)
                continue;
            else
                return false;
        }
    }
    return true;
}

bool ScalarConverter::isDouble(const std::string& str)
{
    int p = 0;

    if (str == "-inf" || str == "nan" || str == "+inf")
        return true;
    for (unsigned long i = 0; i < str.length(); i++)
    {
        if (i == 0 && (str[i] == '+' || str[i] == '-'))
            continue;
        else if (!isdigit(str[i]))
        {
            if (str[i] == '.' && ++p == 1)
                continue;
            else
                return false;
        }
    }
    return true;
}

void ScalarConverter::toChar(const std::string& str)
{
    ScalarConverter::_char = str[0];

    ScalarConverter::_int = static_cast<int>(_char);
    ScalarConverter::_float = static_cast<float>(_char);
    ScalarConverter::_double = static_cast<double>(_char);
}

void ScalarConverter::toInt(const std::string& str)
{
    long tmp;

    tmp = strtol(str.c_str(), NULL, 0);
    if (tmp >= INT_MIN && tmp <= INT_MAX)
        ScalarConverter::_int = static_cast<int>(tmp);
    else
        ScalarConverter::_overflow = true;

    ScalarConverter::_char = static_cast<char>(_int);
    ScalarConverter::_float = static_cast<float>(_int);
    ScalarConverter::_double = static_cast<double>(_int);
}

void ScalarConverter::toFloat(const std::string& str)
{
    char* end;
    float tmp;

    if (str == "-inff")
        ScalarConverter::_mininff = true;
    else if (str == "nanf")
        ScalarConverter::_nan = true;
    else if (str == "+inff")
        ScalarConverter::_maxinff = true;
    else
    {
        tmp = strtod(str.c_str(), &end);
        if ((end == str.c_str() + (str.length() - 1)) && *end == 'f' && tmp >= FLT_MIN && tmp <= FLT_MAX)
           ScalarConverter:: _float = tmp;
        else
            ScalarConverter::_overflow = true;
    }

    ScalarConverter::_char = static_cast<char>(_float);
    ScalarConverter::_int = static_cast<int>(_float);
    ScalarConverter::_double = static_cast<double>(_float);
}

void ScalarConverter::toDouble(const std::string& str)
{
    char* end;
    float tmp;

    if (str == "-inf")
        ScalarConverter::_mininff = true;
    else if (str == "nan")
        ScalarConverter::_nan = true;
    else if (str == "+inf")
        ScalarConverter::_maxinff = true;
    else
    {
        tmp = strtod(str.c_str(), &end);
        if (end == str.c_str() + str.length() && tmp >= DBL_MIN && tmp <= DBL_MAX)
            ScalarConverter::_double = static_cast<double>(tmp);
        else
            ScalarConverter::_overflow = true;
    }

    ScalarConverter::_char = static_cast<char>(_double);
    ScalarConverter::_int = static_cast<int>(_double);
    ScalarConverter::_float = static_cast<float>(_double);
}

bool ScalarConverter::getError()
{
    if (ScalarConverter::_unknown || ScalarConverter::_overflow)
        return true;
    else
        return false;
}

void ScalarConverter::writeError(std::ostream& os)
{
    if (ScalarConverter::_unknown)
        os << "Error: conversion is impossible." << std::endl;
    else if (ScalarConverter::_overflow)
        os << "Error: Overflow." << std::endl;
}

void ScalarConverter::writeChar(std::ostream& os)
{
    os << "Char: ";
    if (ScalarConverter::_mininff || ScalarConverter::_nan || ScalarConverter::_maxinff)
        os << "Impossible";
    else if (isprint(_char) == 0)
        os << "Non displayable";
    else
        os << ScalarConverter::_char;
    os << std::endl;
}

void ScalarConverter::writeInt(std::ostream& os)
{
    os << "Int: ";
    if (ScalarConverter::_mininff || ScalarConverter::_nan || ScalarConverter::_maxinff)
        os << "Impossible";
    else
        os << ScalarConverter::_int;
    os << std::endl;
}

void ScalarConverter::writeFloat(std::ostream& os)
{
    os << "Float: ";
    if (ScalarConverter::_mininff)
        os << "-inff";
    else if (ScalarConverter::_nan)
        os << "nanf";
    else if (ScalarConverter::_maxinff)
        os << "+inff";
    else
        os << std::fixed << ScalarConverter::_float << "f";
    os << std::endl;
}

void ScalarConverter::writeDouble(std::ostream& os)
{
    os << "Double: ";
    if (ScalarConverter::_mininff)
        os << "-inff";
    else if (ScalarConverter::_nan)
        os << "nanf";
    else if (ScalarConverter::_maxinff)
        os << "+inff";
    else
        os << std::fixed << ScalarConverter::_double;
    os << std::endl;
}
