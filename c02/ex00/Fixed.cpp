
#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->_a = 0;
}

Fixed::Fixed(const Fixed &f)
{
	std::cout << "Copy constructor called" << std::endl;
	this->_a = f._a;
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (_a);
}

void setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	(void)raw;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}