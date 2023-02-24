
# include "ClapTrap.hpp"

int main (void)
{
	ClapTrap bob("doudou");

	bob.attack("nounource");
	bob.beRepaired(3);
	bob.takeDamage(5);
	bob.takeDamage(8);
	bob.takeDamage(5);
}