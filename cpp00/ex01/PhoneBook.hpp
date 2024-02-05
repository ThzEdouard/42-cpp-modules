#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
# include <iostream>
# include <string>

class PhoneBook
{
private:
	Contact	contact[8];
	int		in;
public:
	PhoneBook();
	~PhoneBook();
	int		view_rep();
	int		set_contact(int	index);
};



#endif