#include "Animal.hpp"

Animal::Animal(std::string type)
{
	std::cout << "Animal Default constructor called" << std::endl;
	_type = type;
}

void	Animal::makeSound()
{
	if (_type = "Dog")
		std::cout << "Dog is taking " <<  std::endl;
	else
		std::cout << "Cat is taking " << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal Destructor called" << std::endl;
}