#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class ClapTrap
{
private:
	std::string _name;
	int	_hit;
	int _energy;
	int _attack;
public:
	ClapTrap(std::string);
	ClapTrap(const ClapTrap &ref);
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	~ClapTrap();
	ClapTrap &operator=(const ClapTrap &ref);
};

#endif