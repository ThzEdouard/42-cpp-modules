
#include "ScavTrap.hpp"

int main(void)
{
	ScavTrap bob("doudou");

	bob.attack("nounource");
	bob.takeDamage(50);
	bob.takeDamage(20);
}