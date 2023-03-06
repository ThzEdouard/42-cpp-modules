#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	this->in = 0;
}

PhoneBook::~PhoneBook()
{
}

int	PhoneBook::set_contact(int index)
{
	int	ret;

	ret = contact[index].set_contact();
	if (!ret)
		return -1;
	index++;
	if (this->in < index)
		this->in = index;
	if (index == 8)
		index = 0;
	return index;
}

void	view(std::string s)
{
	if (s.size() > 10)
		std::cout << std::right << std::setw(9) << s.substr(0,9) << "." << "|";
	else
		std::cout << std::right << std::setw(10) << s.substr(0,10) <<  "|";
}

int	PhoneBook::view_rep()
{

	std::string opcontactor;

	std::cout << "|================================================================|" << std::endl;
	std::cout << "|                                                                |" << std::endl;
	std::cout << "|    index| Firt name| Last Name|  Nickname|    number|    secret|" << std::endl;
	std::cout << "|                                                                |" << std::endl;
	std::cout << "|================================================================|" << std::endl;
	for(int i = 0; i < this->in; i++)
	{
		std::cout << "|";
		std::cout << std::right << std::setw(9) << i << "|";
		view(this->contact[i].get_fname());
		view(this->contact[i].get_lname());
		view(this->contact[i].get_nickname());
		view(this->contact[i].get_pnumber());
		view(this->contact[i].get_dsecret());
		std::cout << std::endl;
	}
	std::cout << "|================================================================|" << std::endl;
	std::getline(std::cin >> std::ws, opcontactor);
	this->contact[atoi(opcontactor.c_str())].view_contact();
	return (0);
}
