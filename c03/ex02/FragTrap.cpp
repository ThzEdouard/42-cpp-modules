#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "FragTrap Default constructor called" << std::endl;
	_hit = 100;
	_energy = 100;
	_attack = 30;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "special capacity high fives request" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap Destructor called" << std::endl;
}
