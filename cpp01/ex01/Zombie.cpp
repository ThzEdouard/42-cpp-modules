#include "Zombie.hpp"

Zombie::Zombie()
{
	
}

Zombie::Zombie(std::string n)
{
	this->name = n;
	std::cout << "Zombie consturtor called : " << this->name << std::endl;
}

void	Zombie::set_name(std::string name)
{
	this->name = name;
}

void	Zombie::announce(void)
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "Zombie destuructor called : " << this->name << std::endl;
}