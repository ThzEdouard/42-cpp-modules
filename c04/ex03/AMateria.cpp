#include "AMateria.hpp"

AMateria::AMateria(std::string const & type) : _type(type)
{
    std::cout << "AMateria(" << _type << ") constructor called !" << std::endl;
}

AMateria::AMateria(const AMateria &ref) : _type(ref._type)
{
    std::cout << "AMateria(" << _type << ") copy constructor called !" << std::endl;
}

AMateria::~AMateria()
{
    std::cout << "AMateria (" << _type << ") destructor called !" << std::endl;
}

AMateria &AMateria::operator=(const AMateria &ref) {
    _type = ref._type;
    return *this;
}

std::string const &AMateria::getType() const
{
    return _type;
}

void AMateria::use(ICharacter& target)
{
    (void)target;
}