

#include "Weapon.hpp"

Weapon::Weapon(std::string) {}
Weapon::~Weapon() {}

void    Weapon::setType(std::string type)
{
    this->type = type;
}

std::string const &Weapon::getType(){return &this->type;}