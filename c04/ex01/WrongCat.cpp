#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("Cat")
{
    std::cout << "WrongCat(void) constructor called !" << std::endl;
}
WrongCat::WrongCat(std::string ty) : WrongAnimal(ty)
{
    std::cout << "WrongCat("<< type <<") constructor called !" << std::endl;
}
WrongCat::WrongCat(const WrongCat &ref) : WrongAnimal(ref.type)
{
    std::cout << "WrongCat("<< type << ") copy constructor called !" << std::endl;
}
WrongCat::~WrongCat()
{
    std::cout << "WrongCat("<< type <<") Destructor called !" << std::endl;
}
WrongCat &WrongCat::operator=(const WrongCat &ref)
{
    type = ref.type;
    return *this;
}

void WrongCat::makeSound() const
{
    std::cout << "Meow" << std::endl;
}