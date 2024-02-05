//
// Created by Edouard Flaquet on 29/03/2023.
//

#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
   std::cout << "Dog(void) constructor called !" << std::endl;
}

Dog::Dog(std::string ty) : Animal(ty)
{
    std::cout << "Dog("<< type <<") constructor called !" << std::endl;
}
Dog::Dog(const Dog &ref) : Animal(ref)
{
    std::cout << "Dog("<< type <<") copy constructor called !" << std::endl;
}
Dog::~Dog()
{
    std::cout << "Dog("<< type <<") destructor called !" << std::endl;
}
Dog &Dog::operator=(const Dog &ref)
{
    type = ref.type;
    return *this;
}

void Dog::makeSound() const
{
    std::cout << "Waf" << std::endl;
}