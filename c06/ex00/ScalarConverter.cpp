#include "ScalarConverter.hpp"

bool	isChar(std::string str)
{
	if (str.length() != 1 || isdigit(str[0]) != 0)
		return (false);
	return (true);
}

bool isInt(std::string str)
{
	for (size_t i = 0 ; i < str.length() ; i++)
	{
		if (i == 0 && (str[i] == '+' || str[i] == '-'))
			continue ;
		else if (isdigit(str[i]) == false)
			return (false);
	}
	return (true);
}

bool isFloat(std::string str)
{
	int	number_of_points = 0;

	if (str == "-inff" || str == "nanf" || str == "+inff")
		return (true);
	if (str[str.length() - 1] != 'f')
		return (false);
	for (size_t i = 0 ; i < str.length() - 1 ; i++)
	{
		if (i == 0 && (str[i] == '+' || str[i] == '-'))
			continue ;
		else if (isdigit(str[i]) == false)
		{
			if (str[i] == '.' && ++number_of_points == 1)
				continue ;
			else
				return (false);
		}
	}
	return (true);
}

bool	isDouble(std::string str)
{
	int	number_of_points = 0;

	if (str == "-inf" || str == "nan" || str == "+inf")
		return (true);
	for (size_t i = 0 ; i < str.length() ; i++)
	{
		if (i == 0 && (str[i] == '+' || str[i] == '-'))
			continue ;
		else if (isdigit(str[i]) == false)
		{
			if (str[i] == '.' && ++number_of_points == 1)
				continue ;
			else
				return (false);
		}
	}
	return (true);
}

ScalarConverter::ScalarConverter(std::string &str) : _str(str), _unknown_type(false), _minus_inf(false), _null(false), _plus_inf(false), _overflow(false)
{
	if (isChar(_str))
	{
		//strtochar
		_char = _str[0];
		//convertirchar
		_int = static_cast<int>(_char);
		_float = static_cast<float>(_char);
		_double = static_cast<double>(_char);
}
	}
	else if (isInt(_str))
	{
		//strtoint
		long	tmp;

	tmp = strtol(_str.c_str(), NULL, 0);
	if (tmp >= INT_MIN && tmp <= INT_MAX)
		_int = static_cast<int>(tmp);
	else
		_overflow = true;
		//convertirint
		_char = static_cast<char>(_int);
	_float = static_cast<float>(_int);
	_double = static_cast<double>(_int);
	}
	else if (isFloat(_str))
	{
		//strtofloat
		char	*end;
		float	tmp;

	if (_str == "-inff")
		_minus_inf = true;
	else if (_str == "nanf")
		_null = true;
	else if (_str == "+inff")
		_plus_inf = true;
	else
	{
		tmp = strtod(_str.c_str(), &end);
		if ((end == _str.c_str() + (_str.length() - 1)) && *end == 'f'
			&& tmp >= static_cast<float>(INT_MIN) 
			&& tmp <= static_cast<float>(INT_MAX))
			_float = tmp;
		else
			_overflow = true;
	}
		//convertirfloat
		_char = static_cast<char>(_float);
	_int = static_cast<int>(_float);
	_double = static_cast<double>(_float);
	}
	else if (isDouble(_str))
	{
		//strtodouble
		char	*end;
	float	tmp;

	if (_str == "-inf")
		_minus_inf = true;
	else if (_str == "nan")
		_null = true;
	else if (_str == "+inf")
		_plus_inf = true;
	else
	{
		tmp = strtod(_str.c_str(), &end);
		if (end == _str.c_str() + _str.length()
			&& tmp >= static_cast<double>(INT_MIN) 
			&& tmp <= static_cast<double>(INT_MAX))
			_double = static_cast<double>(tmp);
		else
			_overflow = true;
	}
		//convertirdouble
		_char = static_cast<char>(_double);
	_int = static_cast<int>(_double);
	_float = static_cast<float>(_double);
	}
	else 
		_unknown_type = true;
}

ScalarConverter::ScalarConverter(const ScalarConverter &ref)
{
	if (&ref != this)
		*this = ref;
}

ScalarConverter::~ScalarConverter(){}

const ScalarConverter &ScalarConverter::operator=(const ScalarConverter &ref)
{
	if (&ref != this)
	{
		_str = ref._str;
		_char = ref._char;
		_int = ref._int;
		_float = ref._float;
		_double = ref._double;
	}
	return (*this);
}

std::ostream &operator<<(std::ostream &os, ScalarConverter const &ref)
{
	if (rhs.getError() == true)
		rhs.displayError(output);
	else
	{
		output << "Char    : ";
		rhs.displayChar(output);
		output << std::endl;
		
		output << "Int     : ";
		rhs.displayInt(output);
		output << std::endl;
		
		output << "Float   : ";
		rhs.displayFloat(output);
		output << std::endl;
		
		output << "Double  : ";
		rhs.displayDouble(output);
		output << std::endl;
	}
	return (os);
}

bool	Cast::getError(void) const
{
	if (_unknown_type || _overflow)
		return (true);
	else
		return (false);
}

void	Cast::displayError(std::ostream & output) const
{
	if (_unknown_type)
		output << "Error : Cannot convert your input." << std::endl;
	else if (_overflow)
		output << "Error : Overflow." << std::endl;
}

void	Cast::displayChar(std::ostream & output) const
{
	if (_minus_inf || _null || _plus_inf)
		output << "Impossible";
	else if (isprint(_char) == 0)
		output << "Non displayable";
	else
		output << _char;
}

void	Cast::displayInt(std::ostream & output) const
{
	if (_minus_inf || _null || _plus_inf)
		output << "Impossible";
	else
		output << _int;
}

void	Cast::displayFloat(std::ostream & output) const
{
	if (_minus_inf)
		output << "-inff";
	else if (_null)
		output << "nanf";
	else if (_plus_inf)
		output << "+inff";
	else
		output << std::fixed << _float << "f";
}

void	Cast::displayDouble(std::ostream & output) const
{
	if (_minus_inf)
		output << "-inf";
	else if (_null)
		output << "nan";
	else if (_plus_inf)
		output << "+inf";
	else
		output << std::fixed << _double;
}