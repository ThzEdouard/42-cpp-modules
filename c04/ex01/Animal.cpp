#include "Animal.hpp"

Animal::Animal() : type("Animal")
{
	std::cout << "Animal consturtor called" << std::endl;
}

Animal::Animal(const Animal &ref) : type(ref.type)
{
	std::cout << "Copy Animal consturtor called" << std::endl;
}

void Animal::makeSound() const
{
	std::cout << "Animal" << std::endl;
}

std::string Animal::getType() const
{
	return (type);
}

const Animal &Animal::operator=(const Animal &ref)
{
	type = ref.type;
	return *this;
}

Animal::~Animal()
{
	std::cout << "Animal destuructor called" << std::endl;
}