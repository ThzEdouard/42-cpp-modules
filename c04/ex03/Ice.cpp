#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
    std::cout << "Ice default constructor called !" << std::endl;
}

Ice::Ice(const Ice &ref) : AMateria(ref._type)
{
    std::cout << "Ice copy constructor called !" << std::endl;
}

Ice &Ice::operator=(const Ice &ref)
{
    AMateria::operator=(ref);
    return *this;
}

void Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at "<< target.getName() << " *" << std::endl;
}

AMateria *Ice::clone() const
{
    return (new Ice(*this));
}

Ice::~Ice()
{
    std::cout << "Ice destructor called !" << std::endl;
}