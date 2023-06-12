#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>
# include <string>

class ScalarConverter
{
private:
	char	_char;
	int		_int;
	float	_float;
	double	_double;
public:
	ScalarConverter(const std::string &);
	ScalarConverter(const ScalarConverter &);
	~ScalarConverter();
	const ScalarConverter &operator=(const ScalarConverter &);

	static char		getChar();
	static int		getInt();
	static float	getFloat() ;
	static double	getDouble() ;

};


#endif