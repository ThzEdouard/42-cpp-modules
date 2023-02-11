
#include <iostream>
#include <string>

int	main(void)
{
	std::string var = "HI THIS IS BRAIN";
	std::string *stringPTR = &var;
	std::string &stringREF = var;

	std::cout << &var << " " << stringPTR << " " << &stringREF << std::endl;
	std::cout << var << " " << *stringPTR << " " << stringREF << std::endl;

	return (0);
}