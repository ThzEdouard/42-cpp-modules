#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Base.hpp"
 #include <unistd.h>
Base * generate(void)
{
	std::srand(static_cast<unsigned int>(std::time(NULL)));

	int	random = std::rand() % 3;
	if (random == 0)
		return (new A());
	else if (random == 1)
		return (new B());
	else
		return (new C());
	return (NULL);
}

void identify(Base* p)
{
	if (dynamic_cast<A*>(p) != NULL)
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p) != NULL)
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p) != NULL)
		std::cout << "C" << std::endl;
}

void identify(Base& p)
{
	try
	{
		A &a = dynamic_cast<A &>(p);
		(void)a;
		std::cout << "A" << std::endl;
	}
	catch(const std::exception& e)
	{
		(void)e;
	}

	try
	{
		B &b = dynamic_cast<B &>(p);
		(void)b;
		std::cout << "B" << std::endl;
	}
	catch(const std::exception& e)
	{
		(void)e;
	}
	try
	{
		C &c = dynamic_cast<C &>(p);
		(void)c;
		std::cout << "C" << std::endl;
	}
	catch(const std::exception& e)
	{
		(void)e;
	}
}

int main(void)
{
	std::cout << "l'encement de 20 test cela peut prendre quelque second" << std::endl;

	for (int i = 0; i < 20; i++)
	{
		Base *rand = generate();
		std::cout << "identify(Base* p) : "; identify(rand);
		std::cout << "identify(Base& p) : "; identify(*rand);
		delete rand;
		sleep(1);
	}
}