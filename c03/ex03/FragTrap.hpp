#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
public:
    FragTrap();
	FragTrap(std::string);
    FragTrap(const FragTrap &ref);
    void attack(const std::string& target);
	void highFivesGuys(void);
	~FragTrap();

    FragTrap &operator=(const FragTrap &ref);
};

#endif
