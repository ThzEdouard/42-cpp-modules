#include "Dog.hpp"

Dog::Dog()
{
	type = "Dog";
	std::cout << "Dog consturtor called" << std::endl;
}

Dog::Dog(const Dog &ref)
{
	type = ref.type;
	std::cout << "Copy Dog consturtor called" << std::endl;
}

std::string Dog::getType() const
{
	return (type);
}

void Dog::makeSound() const
{
	std::cout << "Woff" << std::endl;
}

const Dog &Dog::operator=(const Dog &ref)
{
	type = ref.type;
	return *this;
}

Dog::~Dog()
{
	std::cout << "Dog destuructor called" << std::endl;
}