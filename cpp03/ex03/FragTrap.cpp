#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
    std::cout << "FragTrap Default(void) Construtor called !" << std::endl;
    _hit = 100;
    _energy = 100;
    _attack = 30;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    std::cout << "FragTrap Default( "<< _name <<" ) Construtor called !" << std::endl;
    _hit = 100;
    _energy = 100;
    _attack = 30;
}

FragTrap::FragTrap(const FragTrap &ref) : ClapTrap(ref)
{
    std::cout << "FragTrap Copy(ref.name( "<< _name <<" )) Construtor called !" << std::endl;
}

void FragTrap::attack(const std::string& target)
{
    if (_energy && _hit)
    {
        std::cout << "FragTrap("<< _name <<") attacks " << target << ", causing " << _attack << " points of damage!" << std::endl;
        _energy--;
    }else
        std::cout << "FragTrap("<< _name <<") not attacks is not energy or hit" << std::endl;
}
void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap( "<< _name << " ) activate mode high Fives Guys(hey) !" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap Destructor( "<< _name <<" ) called !" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &ref)
{
    ClapTrap::operator=(ref);
    return *this;
}