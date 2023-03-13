
#include "Fixed.hpp"

Fixed::Fixed() : _a(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &f) : _a(f._a)
{
	std::cout << "Copy constructor called" << std::endl;
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

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}