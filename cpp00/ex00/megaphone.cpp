#include <iostream>
#include <string>

int	main(int argc, char **argv)
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" ;
	else
		for(int i = 1; argv[i]; i++)
			for(int y = 0; argv[i][y]; y++)
				if (islower(argv[i][y]))
					argv[i][y] = toupper(argv[i][y]);
			;
		;
		for(int i = 1; argv[i]; i++)
			std::cout << argv[i];
	std::cout << std::endl;
	return (0);
}