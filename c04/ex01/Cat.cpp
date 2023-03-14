#include "Cat.hpp"

Cat::Cat()
{
	type = "Cat";
	std::cout << "Cat consturtor called" << std::endl;
}

Cat::Cat(const Cat &ref)
{
	type = ref.type;
	std::cout << "Copy Cat consturtor called" << std::endl;
}

std::string Cat::getType() const
{
	return (type);
}

void Cat::makeSound() const
{
	std::cout << "Meaw" << std::endl;
}

const Cat &Cat::operator=(const Cat &ref)
{
	type = ref.type;
	return *this;
}

Cat::~Cat()
{
	std::cout << "Cat destuructor called" << std::endl;
}