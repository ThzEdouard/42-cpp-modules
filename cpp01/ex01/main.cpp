
#include "Zombie.hpp"

int	main(void)
{
	int const i = 10;
	Zombie *carl = zombieHorde(i, "carl");
	for(int i = 0; i < 10; i++)
		carl[i].announce();
	delete [] carl;
	return (0);
}