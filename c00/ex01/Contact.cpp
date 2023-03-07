#include "Contact.hpp"

Contact::Contact()
{
	std::cout << "Contact Default constructor called" << std::endl;
}

int	Contact::set_contact()
{
	int i;
	std::cout << "========================================" << std::endl;
	while (1)
	{
		std::cout << "firt name : ";
		std::getline(std::cin >> std::ws, this->f_name);
		for(i = 0; i< (int)this->f_name.length(); i++)
		{
			if (!isprint(this->f_name[i]))
			{
				std::cout << "Is not alfanumerique !" << std::endl;
				break;
			}
		}
		if (i == (int)this->f_name.length())
			break;
		if (std::cin.eof())
			return (0);
	}
	while (1)
	{
		std::cout << "last name : ";
		std::getline(std::cin >> std::ws, this->l_name);
		for(i = 0; i< (int)this->l_name.length(); i++)
		{
			if (!isprint(this->l_name[i]))
			{
				std::cout << "Is not alfanumerique !" << std::endl;
				break;
			}
		}
		if (i == (int)this->l_name.length())
			break;
		if (std::cin.eof())
			return (0);
	}
	while (1)
	{
		std::cout << "nickname : ";
		std::getline(std::cin >> std::ws, this->nickname);
		for(i = 0; i< (int)this->nickname.length(); i++)
		{
			if (!isprint(this->nickname[i]))
			{
				std::cout << "Is not alfanumerique !" << std::endl;
				break;
			}
		}
		if (i == (int)this->nickname.length())
			break;
		if (std::cin.eof())
			return (0);
	}
	while (1)
	{
		std::cout << "phone number : ";
		std::getline(std::cin >> std::ws, this->p_number);
		for(i = 0; i < (int)this->p_number.length(); i++)
		{
			if (!isdigit(this->p_number[i]))
			{
				std::cout << "phone number is not alfa numerique 0 . 9 !" << std::endl;
				break;
			}
		}
		if (!this->p_number[i])
			break;
		if (std::cin.eof())
			return (0);
	}
	while (1)
	{
		std::cout << "darkest secret : ";
		std::getline(std::cin >> std::ws, this->d_secret);
		for(i = 0; i< (int)this->d_secret.length(); i++)
		{
			if (!isprint(this->d_secret[i]))
			{
				std::cout << "Is not alfanumerique !" << std::endl;
				break;
			}
		}
		if (i == (int)this->d_secret.length())
			break;
		if (std::cin.eof())
			return (0);
	}
	std::cout << "========================================" << std::endl;
	if (std::cin.eof())
		return (0);
	return (1);
}

void	Contact::view_contact()
{
	std::cout << "==============================" << std::endl;
	std::cout << "first name : " << this->get_fname() << std::endl;
	std::cout << "last name : " << this->get_lname() << std::endl;
	std::cout << "nickname : " << this->get_nickname() << std::endl;
	std::cout << "phone number : " << this->get_pnumber() <<std::endl;
	std::cout << "darkest secret : " << this->get_dsecret() <<std::endl;
	std::cout << "==============================" << std::endl;
}

std::string	Contact::get_fname(){return this->f_name;}
std::string	Contact::get_lname(){return this->l_name;}
std::string	Contact::get_nickname(){return this->nickname;}
std::string	Contact::get_pnumber(){return this->p_number;}
std::string	Contact::get_dsecret(){return this->d_secret;}

Contact::~Contact()
{
	std::cout << "Contact Destructor called" << std::endl;
}
