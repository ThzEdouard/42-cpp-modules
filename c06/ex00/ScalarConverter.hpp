#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>
# include <string>
# include <math.h>
# include <limits.h>
# include <float.h>

class ScalarConverter
{
private:
	std::string _str;

	char		_char;
	int			_int;
	float		_float;
	double		_double;

	bool			_unknown;
	bool			_overflow;

	bool			_mininff;
	bool			_nan;
	bool			_maxinff;

public:
	ScalarConverter(std::string );
	ScalarConverter(const ScalarConverter &);
	~ScalarConverter();
	const ScalarConverter &operator=(const ScalarConverter &);

	bool	isChar() const;
	bool	isInt() const;
	bool	isFloat() const;
	bool	isDouble() const;

	void	toChar();
	void	toInt();
	void	toFloat();
	void	toDouble();

	bool	getError() const;
	void	writeError(std::ostream &) const;
	void	writeChar(std::ostream &) const;
	void	writeInt(std::ostream &) const;
	void	writeFloat(std::ostream &) const;
	void	writeDouble(std::ostream &) const;
};

std::ostream & operator << (std::ostream &, ScalarConverter const &);

#endif