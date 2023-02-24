#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "Claptrap Default constructor called" << std::endl;
	_name = name;
	_hit = 10;
	_energy = 10;
	_attack = 0;
}

void ClapTrap::attack(const std::string& target)
{
	if (_energy)
	{
		std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attack << " points of damage!" << std::endl;
		_energy--;
	}else
		std::cout << "ClapTrap not attacks is not energy" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (_hit > 0)
	{
		std::cout << "Claptrap -" << amount << " hit point !" << std::endl;
		_hit -= amount;
		if (!_hit)
			std::cout << "Claptrap is dead" << std::endl;
		else
			std::cout << "ClapTrap is hit point : " << _hit << std::endl;
	}else
		std::cout << "ClapTrap not hit point" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{

	if (_energy)
	{
		std::cout << "ClapTrap " <<  _name << "repairs " << amount << " Hit point" << std::endl;
		_hit += amount;
		_energy--;
	}else
		std::cout << "ClapTrap not repairs is not energy" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap Destructor called" << std::endl;
}