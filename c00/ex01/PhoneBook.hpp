#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
private:
	Contact contact[8];
public:
	PhoneBook();
	~PhoneBook();
	void	view_rep();
	int		set_contact(int	index);
};



#endif