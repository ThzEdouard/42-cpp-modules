#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>
# include <string>

class ScalarConverter
{ 
private:
	std::string _str;
	
	char		_char;
	int			_int;
	float		_float;
	double		_double;

	bool			_unknown_type;

	bool			_minus_inf;
	bool			_null;
	bool			_plus_inf;
	bool			_overflow;
public:
	ScalarConverter(std::string &);
	ScalarConverter(const ScalarConverter &);
	~ScalarConverter();
	const ScalarConverter &operator=(const ScalarConverter &);
};

std::ostream & operator << (std::ostream &, ScalarConverter const &);

#endif