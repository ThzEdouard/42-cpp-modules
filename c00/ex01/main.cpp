# include "PhoneBook.hpp"
# include <iostream>

int	main(void)
{
	std::string	input;
	PhoneBook	rep;
	int			index;

	index = 0;
	while (1)
	{
		std::getline(std::cin >> std::ws, input);
		if (std::cin.eof())
			break;
		if (input == "EXIT")
			break;
		else if (input == "ADD")
			index = rep.set_contact(index);
		else if (input == "SEARCH")
			rep.view_rep();
		else
			std::cout << "ADD, SEARCH, EXIT";
		if (index == -1)
			break ;
	}

	return (0);
}