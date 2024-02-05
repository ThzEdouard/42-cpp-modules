#include "Animal.hpp"

Animal::Animal() : type("default_animal")
{
    std::cout << "Animal(void) Constructor called !" << std::endl;
}
Animal::Animal(std::string ty) : type(ty)
{
    std::cout << "Animal("<< type <<") Constructor called !" << std::endl;
}
Animal::Animal(const Animal &ref) : type(ref.type)
{
    std::cout << "Animal("<< type <<") Copy Constructor called !" << std::endl;
}
Animal &Animal::operator=(const Animal &ref)
{
    type = ref.type;
    return *this;
}
Animal::~Animal()
{
    std::cout << "Animal("<< type <<") Destructor called !" << std::endl;
}

void Animal::makeSound() const
{
    std::cout << "Animal makeSound("<< type <<") called !" << std::endl;
}
std::string Animal::getType() const
{
    return (type);
}
