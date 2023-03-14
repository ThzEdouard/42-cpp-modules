#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	type = "WrongCat";
	std::cout << "WrongCat consturtor called" << std::endl;
}
WrongCat::WrongCat(const WrongCat &ref)
{
	type = ref.type;
	std::cout << "Copy WrongCat consturtor called" << std::endl;
}

std::string WrongCat::getType() const
{
	return (type);
}
void WrongCat::makeSound() const
{
	std::cout << "Meaw" << std::endl;
}
const WrongCat &WrongCat::operator=(const WrongCat &ref)
{
	type = ref.type;
	return *this;
}
WrongCat::~WrongCat()
{
	std::cout << "WrongCat destuructor called" << std::endl;
}