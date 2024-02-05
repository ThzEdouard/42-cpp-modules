//
// Created by Edouard Flaquet on 29/03/2023.
//

#include "Cat.hpp"

Cat::Cat() : Animal("Cat"), _brain(new Brain())
{
    std::cout << "Cat(void) constructor called !" << std::endl;
}
Cat::Cat(std::string ty) : Animal(ty), _brain(new Brain())
{
    std::cout << "Cat("<< type <<") constructor called !" << std::endl;
}
Cat::Cat(const Cat &ref) : Animal(ref.type), _brain(new Brain(*ref._brain))
{
    std::cout << "Cat("<< type << ") copy constructor called !" << std::endl;
}
Cat::~Cat()
{
    delete _brain;
    std::cout << "Cat("<< type <<") Destructor called !" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "Meow" << std::endl;
}
Brain *Cat::getBrain() const
{
    return _brain;
}
Cat &Cat::operator=(const Cat &ref)
{
    type = ref.type;
    _brain = new Brain(*ref._brain);
    return *this;
}
