#include "Zombie.hpp"

Zombie* newZombie( std::string name );
void randomChump( std::string name );

int	main(void)
{
	Zombie *carl = newZombie("carl");
	carl->announce();	
	randomChump("toto");
	delete(carl);
	return (0);
}