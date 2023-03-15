
#include "Fixed.hpp"

Fixed::Fixed() : _a(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &f) : _a(f._a)
{
	std::cout << "Copy constructor called" << std::endl;
}

Fixed::Fixed(int const i) : _a(i << _b)
{
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(float const i) : _a(int(roundf(i * (1 << _b))))
{
	std::cout << "Float constructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (_a);
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_a = raw;
}

float Fixed::toFloat(void) const
{
	return float (this->_a) / (1 << _b);
}

int Fixed::toInt(void) const
{
	return (this->_a >> _b);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &ref)
{
	_a = ref._a;
	return *this;
}
std::ostream &operator<<(std::ostream &os, Fixed const &val)
{
	os << val.toFloat();
	return os;
}

