#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
}

PhoneBook::~PhoneBook()
{
}
int	PhoneBook::set_contact(int index)
{
	contact[index].set_contact();
	index++;
	if (index == 9)
		index = 0;
	return index;
}

void	view_info(std::string info)
{
	if (info.length() < 10)
		
}

void	PhoneBook::view_rep()
{

	for(int i = 0; i < 9; i++)
	{
	}
}