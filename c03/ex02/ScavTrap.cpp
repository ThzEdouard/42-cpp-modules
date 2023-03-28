#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
    std::cout << "ScavTrap Default(void) constructor called" << std::endl;
    _hit = 100;
    _energy = 50;
    _attack = 20;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap Default( " << _name << " ) constructor called" << std::endl;
	_hit = 100;
	_energy = 50;
	_attack = 20;
}

ScavTrap::ScavTrap(const ScavTrap &ref) : ClapTrap(ref)
{
    std::cout << "ScavTrap Copy(ref.name( "<< _name <<" )) constructor called" << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap( "<< _name <<" ) is now in Gate keeper mode" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
    if (_energy && _hit)
    {
        std::cout << "ScavTrap("<< _name <<") attacks " << target << ", causing " << _attack << " points of damage!" << std::endl;
        _energy--;
    }else
        std::cout << "ScavTrap("<< _name <<") not attacks is not energy or hit" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap Destructor("<< _name <<") called" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &ref)
{
    ClapTrap::operator=(ref);
    return  *this;
}