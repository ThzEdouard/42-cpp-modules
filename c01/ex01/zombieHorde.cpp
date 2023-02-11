
#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	Zombie	*doudou = new Zombie[N];

	for(int i = 0; i < N; i++)
		doudou[i].set_name(name);
	return (doudou);
}