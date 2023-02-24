#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap Default constructor called" << std::endl;
	_name = name;
	_hit = 100;
	_energy = 50;
	_attack = 20;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Destructor called" << std::endl;
}