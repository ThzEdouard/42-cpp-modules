#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("default_animal")
{
    std::cout << "WrongAnimal(void) Constructor called !" << std::endl;
}
WrongAnimal::WrongAnimal(std::string ty) : type(ty)
{
    std::cout << "WrongAnimal("<< type <<") Constructor called !" << std::endl;
}
WrongAnimal::WrongAnimal(const WrongAnimal &ref) : type(ref.type)
{
    std::cout << "WrongAnimal("<< type <<") Copy Constructor called !" << std::endl;
}
WrongAnimal &WrongAnimal::operator=(const WrongAnimal &ref)
{
    type = ref.type;
    return *this;
}
WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal("<< type <<") Destructor called !" << std::endl;
}

void WrongAnimal::makeSound() const
{
    std::cout << "WrongAnimal makeSound("<< type <<") called !" << std::endl;
}
std::string WrongAnimal::getType() const
{
    return (type);
}