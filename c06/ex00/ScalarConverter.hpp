#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>
# include <string>
# include <cmath>
# include <climits>
# include <cfloat>

class ScalarConverter
{
private:
	ScalarConverter();
public:
	static std::string _str;

	static char		_char;
	static int			_int;
	static float		_float;
	static double		_double;

	static bool			_unknown;
	static bool			_overflow;

	static bool			_mininff;
	static bool			_nan;
	static bool			_maxinff;

	static bool isChar(const std::string &);
	static bool isInt(const std::string &);
	static bool isFloat(const std::string &);
	static bool isDouble(const std::string &);

	static void toChar(const std::string &);
	static void toInt(const std::string &);
	static void toFloat(const std::string &);
	static void toDouble(const std::string &);

	static bool getError();
	static void writeError(std::ostream &);
	static void writeChar(std::ostream &);
	static void writeInt(std::ostream &);
	static void writeFloat(std::ostream &);
	static void writeDouble(std::ostream &);

	static void convert(const std::string &);

};

#endif
