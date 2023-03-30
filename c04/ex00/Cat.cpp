//
// Created by Edouard Flaquet on 29/03/2023.
//

#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
    std::cout << "Cat(void) constructor called !" << std::endl;
}
Cat::Cat(std::string ty) : Animal(ty)
{
    std::cout << "Cat("<< type <<") constructor called !" << std::endl;
}
Cat::Cat(const Cat &ref) : Animal(ref.type)
{
    std::cout << "Cat("<< type << ") copy constructor called !" << std::endl;
}
Cat::~Cat()
{
    std::cout << "Cat("<< type <<") Destructor called !" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "Meow" << std::endl;
}

Cat &Cat::operator=(const Cat &ref)
{
    type = ref.type;
    return *this;
}
