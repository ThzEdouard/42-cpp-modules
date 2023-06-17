#include "PmergeMe.hpp"
#include <climits>

int	main(int argc, char *argv[])
{
	if (argc < 2)
			return (std::cout << "Use ./PmergeMe 5 4 6  ..." << std::endl, 1);
	for(int i = 1; i < argc; i++)
	{
		long	tmp;
		std::string _argv = argv[i];
		tmp = strtol(_argv.c_str(), NULL, 0);
		if (tmp <= -1 || tmp >= INT_MAX)
			return (std::cout << "Use ./PmergeMe 5 4 6  ..." << std::endl, 1);
	}
	PmergeMe p((unsigned int)argc, argv);
	std ::cout << p;
	return (0);
}