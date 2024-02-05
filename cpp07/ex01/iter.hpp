#include <iostream>

template<typename T>
void	iter(T *addr, size_t size, void (*func)(T&))
{
	for(size_t i = 0; i < size; i++)
	{
		func(addr[i]);
	}
	std::cout << std::endl;
}

template<typename T>
void	view(T &addr)
{
	std::cout << addr << ", ";
}