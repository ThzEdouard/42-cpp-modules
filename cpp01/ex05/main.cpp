#include "Harl.hpp"

int main(void)
{
	Harl bob;
	std::cout << "WARNING : " << std::endl;
	bob.complain("WARNING");
	std::cout << "DEBUG : " << std::endl;
	bob.complain("DEBUG");
	std::cout << "INFO : " << std::endl;
	bob.complain("INFO");
	std::cout << "ERROR : " << std::endl;
	bob.complain("ERROR");
}