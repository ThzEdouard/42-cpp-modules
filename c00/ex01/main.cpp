#include <iostream>
# define ADD
# define SEARCH
# define EXIT

int	main(int argc, char **argv)
{
	std::string test;
	while (1)
	{
		std::cout << "ADD, SEARCH et EXIT\n";
		std::cin >> test;
		std::cout << test;
		break ;
	}
	return (0);
}