//
// Created by Edouard Flaquet on 29/03/2023.
//

#include "Dog.hpp"

Dog::Dog() : Animal("Dog"), _brain(new Brain())
{
   std::cout << "Dog(void) constructor called !" << std::endl;
}

Dog::Dog(std::string ty) : Animal(ty), _brain(new Brain())
{
    std::cout << "Dog("<< type <<") constructor called !" << std::endl;
}
Dog::Dog(const Dog &ref) : Animal(ref), _brain(new Brain(*ref._brain))
{
    std::cout << "Dog("<< type <<") copy constructor called !" << std::endl;
}
Dog::~Dog()
{
    delete _brain;
    std::cout << "Dog("<< type <<") destructor called !" << std::endl;
}
Dog &Dog::operator=(const Dog &ref)
{
    type = ref.type;
    _brain = new Brain(*ref._brain);
    return *this;
}

Brain *Dog::getBrain() const
{
    return _brain;
}

void Dog::makeSound() const
{
    std::cout << "Waf" << std::endl;
}