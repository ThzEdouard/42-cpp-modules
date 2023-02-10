# include "PhoneBook.hpp"
# include <iostream>

int	main(void)
{
	std::string	input;
	PhoneBook	rep;
	int			index;

	index = 0;
	while (true)
	{
		std::getline(std::cin >> std::ws, input);
		if (input.compare("EXIT"))
			break;
		if (input.compare("ADD"))
			index = rep.set_contact(index);
		else if (input.compare("SEARCH"))
			rep.view_rep();
		else
			std::cout << "ADD, SEARCH, EXIT";
	}

	return (0);
}