#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>
# include <string>

class ScalarConverter
{
public:
	ScalarConverter();
	ScalarConverter(const ScalarConverter &);
	~ScalarConverter();
	const ScalarConverter &operator=(const ScalarConverter &);

	static void	convert(std::string &);

	static char		getConvertChar(std::string &) ;
	static int		getConvertInt(std::string &) ;
	static float	getConvertFloat(std::string &) ;
	static double	getConvertDouble(std::string &) ;

};


#endif