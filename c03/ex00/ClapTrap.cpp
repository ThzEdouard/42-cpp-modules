#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "Default constructor called" << std::endl;
	_name = name;
	_hit = 10;
	_energy = 10;
	_attack = 0;
}

ClapTrap::ClapTrap(const ClapTrap &ref)
{
	std::cout << "Copy Default constructor called" << std::endl;
	_name = ref._name;
	_hit = ref._hit;
	_energy = ref._energy;
	_attack = ref._attack;
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
	std::cout << "Destructor called" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &ref)
{
	_name = ref._name;
	_hit = ref._hit;
	_energy = ref._energy;
	_attack = ref._attack;
	return *this;
}