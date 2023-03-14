#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("WrongAnimal")
{
	std::cout << "WrongAnimal consturtor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &ref)
{
	type = ref.type;
	std::cout << "Copy WrongAnimal consturtor called" << std::endl;
}

std::string WrongAnimal::getType() const
{
	return (type);
}

void WrongAnimal::makeSound() const
{
	std::cout <<  "WrongAnimal" << std::endl;
}

const WrongAnimal &WrongAnimal::operator=(const WrongAnimal &ref)
{
	type = ref.type;
	return *this;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destuructor called" << std::endl;
}