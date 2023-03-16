#ifndef FIXED_HPP
#define FIXED_HPP

#include <string>
#include <iostream>
#include <cmath>

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

	Fixed &operator=(const Fixed &ref);

	bool operator>(Fixed const &val);
	bool operator<(Fixed const &val);
	bool operator>=(Fixed const &val);
	bool operator<=(Fixed const &val);
	bool operator==(Fixed const &val);
	bool operator!=(Fixed const &val);
	Fixed operator+(Fixed const &val);
	Fixed operator-(Fixed const &val);
	Fixed operator*(Fixed const &val);
	Fixed operator/(Fixed const &val);
	Fixed &operator++();
	Fixed operator++(int);
	Fixed &operator--();
	Fixed operator--(int);
	static Fixed &min(Fixed &a, Fixed &b);
	static Fixed &max(Fixed &a, Fixed &b);
	static const Fixed &min(const Fixed& a, const Fixed& b);
	static const Fixed &max(const Fixed& a, const Fixed& b);
};

std::ostream &operator<<(std::ostream &os, Fixed const &val);

#endif