
# include <iostream>
# include <string>

int	main(int argc, char **argv)
{
	std::string	str;
	while (1)
	{
		std::cout << "ADD, SEARCH EXIT\n";
		getline(std::cin, str);
		if (str == "EXIT")
			break;
	}
	return (0);
}
