#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "ClapTrap.hpp"
class DiamondTrap : public ScavTrap, public FragTrap{

private:
    std::string _name;
public:
    DiamondTrap();
    DiamondTrap(std::string);
    DiamondTrap(const DiamondTrap &ref);
    ~DiamondTrap();
    DiamondTrap &operator=(const DiamondTrap &ref);
    void attack(const std::string& target);
    void whoAmI();
};


#endif
