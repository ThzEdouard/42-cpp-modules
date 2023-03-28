#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("default_clap_name"), ScavTrap(), FragTrap(), _name("default")
{
    std::cout << "DiamondTrap Default(void) constructor called" << std::endl;
    this->FragTrap::_hit = 100;
    this->ScavTrap::_energy = 50;
    this->FragTrap::_attack = 30;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name") , ScavTrap(), FragTrap(), _name(name)
{
    std::cout << "DiamondTrap Default( "<< _name <<" ) constructor called" << std::endl;
    this->FragTrap::_hit = 100;
    this->ScavTrap::_energy = 50;
    this->FragTrap::_attack = 30;
}

DiamondTrap::DiamondTrap(const DiamondTrap &ref) : ClapTrap(ref) , ScavTrap(), FragTrap()
{
    std::cout << "DiamondTrap Copy(ref.name( "<< _name <<" )) constructor called" << std::endl;
}

void DiamondTrap::attack(const std::string &target)
{
    this->ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
    std::cout << "whoAmI DiamondTrap (Name) -> " << this->_name << " And ClapTrap (name) -> "<< this->ClapTrap::_name << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &ref)
{
    ClapTrap::operator=(ref);
    return *this;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap destructor called" << std::endl;
}