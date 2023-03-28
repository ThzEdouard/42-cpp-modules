#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("default")
{
    std::cout << "Default(void) constructor called" << std::endl;
    _hit = 10;
    _energy = 10;
    _attack = 0;
}

ClapTrap::ClapTrap(std::string name) : _name(name)
{
	std::cout << "Default("<< _name <<") constructor called" << std::endl;
	_hit = 10;
	_energy = 10;
	_attack = 0;
}

ClapTrap::ClapTrap(const ClapTrap &ref) : _name(ref._name)
{
	std::cout << "Copy Default(ref.name("<< _name <<")) constructor called" << std::endl;
	_hit = ref._hit;
	_energy = ref._energy;
	_attack = ref._attack;
}

void ClapTrap::attack(const std::string& target)
{
	if (_energy && _hit)
	{
		std::cout << "ClapTrap ("<< _name <<") attacks " << target << ", causing " << _attack << " points of damage!" << std::endl;
		_energy--;
	}else
		std::cout << "ClapTrap("<< _name <<") not attacks is not energy or hit" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (_hit > 0)
	{
		std::cout << "Claptrap("<< _name <<") -" << amount << " hit point !" << std::endl;
		_hit -= amount;
		if (!_hit)
			std::cout << "Claptrap("<< _name <<") is dead" << std::endl;
		else
			std::cout << "ClapTrap("<< _name <<") is hit point : " << _hit << std::endl;
	}else
		std::cout << "ClapTrap("<< _name <<") not hit point" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{

	if (_energy && _hit)
	{
		std::cout << "ClapTrap(" <<  _name << ") repairs " << amount << " Hit point" << std::endl;
		_hit += amount;
		_energy--;
	}else
		std::cout << "ClapTrap("<< _name <<") not repairs is not energy or hit" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap Destructor("<< _name <<") called" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &ref)
{
	_name = ref._name;
	_hit = ref._hit;
	_energy = ref._energy;
	_attack = ref._attack;
	return *this;
}