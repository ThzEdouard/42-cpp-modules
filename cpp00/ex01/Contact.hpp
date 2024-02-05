#ifndef CONTACT_HPP
# define CONTACT_HPP


# include <iostream>
# include <string>
# include <iomanip>
# include <stdlib.h>
class Contact
{
private:
	std::string	f_name;
	std::string	l_name;
	std::string	nickname;
	std::string	p_number;
	std::string	d_secret;
public:
	Contact();
	~Contact();
	std::string	get_fname();
	std::string	get_lname();
	std::string	get_nickname();
	std::string	get_pnumber();
	std::string	get_dsecret();

	int		set_contact();
	void	view_contact();

};

#endif