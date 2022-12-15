#ifndef CONTACT_H
# define CONTACT_H

# include <iostream>
# include <string>

class contact
{
	private:
		std::string	first_name;
		std::string	last_name;
		std::string	nickname;
		std::string	phone_number;
		std::string	darkest_secret;
	public:
		contact(void);
		void	add_contact();
		std::string get_first_name(){	return (this->first_name);}
		std::string get_last_name(){	return (this->last_name);}
		std::string get_nickname(){	return (this->nickname);}
		std::string get_phone_number(){	return (this->phone_number);}
		std::string get_darkest_secret(){	return (this->darkest_secret);}
};

#endif