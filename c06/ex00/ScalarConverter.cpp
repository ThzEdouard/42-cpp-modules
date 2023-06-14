#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(std::string str) : _str(str), _unknown(false), _overflow(false), _mininff(false), _nan(false), _maxinff(false)
{

	if (this->isChar())
		this->toChar();
	else if (this->isInt())
		this->toInt();
	else if (this->isFloat())
		this->toFloat();
	else if (this->isDouble())
		this->toDouble();
	else
		_unknown = true;
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
		_unknown = ref._unknown;
		_mininff = ref._mininff;
		_maxinff = ref._maxinff;
		_overflow = ref._overflow;
	}
	return (*this);
}

std::ostream &operator<<(std::ostream &os, ScalarConverter const &ref)
{
	if (ref.getError())
		ref.writeError(os);
	else
	{
		ref.writeChar(os);
		ref.writeInt(os);
		ref.writeFloat(os);
		ref.writeDouble(os);
	}
	return (os);
}

bool	ScalarConverter::isChar() const
{
	if (_str.length() != 1 || isdigit(_str[0]) != 0)
		return (false);
	return (true);
}

bool ScalarConverter::isInt() const
{
	for (unsigned long i = 0 ; i < _str.length() ; i++)
	{
		if (i == 0 && (_str[i] == '+' || _str[i] == '-'))
			continue ;
		else if (!isdigit(_str[i]))
			return (false);
	}
	return (true);
}

bool ScalarConverter::isFloat() const
{
	int	p = 0;

	if (_str == "-inff" || _str == "nanf" || _str == "+inff")
		return (true);
	if (_str[_str.length() - 1] != 'f')
		return (false);
	for (unsigned long i = 0 ; i < _str.length() - 1 ; i++)
	{
		if (i == 0 && (_str[i] == '+' || _str[i] == '-'))
			continue ;
		else if (!isdigit(_str[i]))
		{
			if (_str[i] == '.' && ++p == 1)
				continue ;
			else
				return (false);
		}
	}
	return (true);
}

bool	ScalarConverter::isDouble() const
{
	int	p = 0;

	if (_str == "-inf" || _str == "nan" || _str == "+inf")
		return (true);
	for (unsigned long i = 0 ; i < _str.length() ; i++)
	{
		if (i == 0 && (_str[i] == '+' || _str[i] == '-'))
			continue ;
		else if (!isdigit(_str[i]))
		{
			if (_str[i] == '.' && ++p == 1)
				continue ;
			else
				return (false);
		}
	}
	return (true);
}

void	ScalarConverter::toChar()
{
	_char = _str[0];

	_int = static_cast<int>(_char);
	_float = static_cast<float>(_char);
	_double = static_cast<double>(_char);
}

void	ScalarConverter::toInt()
{
	long	tmp;

	tmp = strtol(_str.c_str(), NULL, 0);
	if (tmp >= INT_MIN && tmp <= INT_MAX)
		_int = static_cast<int>(tmp);
	else
		_overflow = true;

	_char = static_cast<char>(_int);
	_float = static_cast<float>(_int);
	_double = static_cast<double>(_int);
}

void	ScalarConverter::toFloat()
{
	char	*end;
	float	tmp;

	if (_str == "-inff" )
		_mininff = true;
	else if (_str == "nanf")
		_nan = true;
	else if (_str == "+inff")
		_maxinff = true;
	else
	{
		tmp = strtod(_str.c_str(), &end);
		if ((end == _str.c_str() + (_str.length() - 1)) && *end == 'f' && tmp >= FLT_MIN && tmp <= FLT_MAX)
			_float = tmp;
		else
			_overflow = true;
	}

	_char = static_cast<char>(_float);
	_int = static_cast<int>(_float);
	_double = static_cast<double>(_float);
}

void	ScalarConverter::toDouble()
{
	char	*end;
	float	tmp;

	if (_str == "-inf")
		_mininff = true;
	else if (_str == "nan")
		_nan = true;
	else if (_str == "+inf")
		_maxinff = true;
	else
	{
		tmp = strtod(_str.c_str(), &end);
		if (end == _str.c_str() + _str.length() && tmp >= DBL_MIN && tmp <= DBL_MAX)
			_double = static_cast<double>(tmp);
		else
			_overflow = true;
	}

	_char = static_cast<char>(_double);
	_int = static_cast<int>(_double);
	_float = static_cast<float>(_double);
}

bool	ScalarConverter::getError() const
{
	if (_unknown || _overflow)
		return (true);
	else
		return (false);
}

void	ScalarConverter::writeError(std::ostream &os) const
{
	if (_unknown)
		os << "Error : conversion is impossible." << std::endl;
	else if (_overflow)
		os << "Error : Overflow." << std::endl;
}

void	ScalarConverter::writeChar(std::ostream & os) const
{
	os << "Char: ";
	if (_mininff || _nan || _maxinff)
		os << "Impossible";
	else if (isprint(_char) == 0)
		os << "Non displayable";
	else
		os << _char;
	os << std::endl;
}

void	ScalarConverter::writeInt(std::ostream & os) const
{
	os << "Int: ";
	if (_mininff || _nan || _maxinff)
		os << "Impossible";
	else
		os << _int;
	os << std::endl;
}

void	ScalarConverter::writeFloat(std::ostream & os) const
{
	os << "Float: ";
	if (_mininff)
		os << "-inff";
	else if (_nan)
		os << "nanf";
	else if (_maxinff)
		os << "+inff";
	else
		os << std::fixed << _float << "f";
	os << std::endl;
}

void	ScalarConverter::writeDouble(std::ostream & os) const
{
	os << "Double  : ";
	if (_mininff)
		os << "-inff";
	else if (_nan)
		os << "nanf";
	else if (_maxinff)
		os << "+inff";
	else
		os << std::fixed << _double;
	os << std::endl;
}