#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{

public:
    ScavTrap();
	ScavTrap(std::string);
    ScavTrap(const ScavTrap &ref);
	void guardGate();
    void attack(const std::string& target);
	~ScavTrap();
    ScavTrap &operator=(const ScavTrap &ref);
};

#endif