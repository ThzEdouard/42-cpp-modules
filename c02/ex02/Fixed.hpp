#ifndef FIXED_HPP
#define FIXED_HPP

#include <string>
#include <iostream>

class Fixed
{
private:
	int	_a;
	static const int	_b = 8;
public:
	Fixed();
	Fixed(const Fixed &f);
	Fixed(int const);
	Fixed(float const);
	int getRawBits(void) const;
	void setRawBits(int const raw);
	float toFloat(void) const;
	int toInt(void) const;
	~Fixed();

};

std::ostream &operator<<(std::ostream &os, Fixed const &val);

#endif