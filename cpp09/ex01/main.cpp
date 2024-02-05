#include "RPN.hpp"

int	main(int argc, char *argv[])
{
	if (argc > 2 || argc < 2)
	{
		std::cout << "use  ./RPN '8 9 * 9 - 9 - 9 - 4 - 1 +'" << std::endl;
		return (1);
	}
	try
	{
		RPN rnp;
		rnp.calcul(argv[1]);
	}
	catch(const std::runtime_error& e)
	{
		std::cerr << e.what() << '\n';
	}

	return (0);
}