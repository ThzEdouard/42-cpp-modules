#ifndef INTERN_HPP
# define INTERN_HPP

#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
public:
	Intern();
	Intern(const Intern &);
	~Intern();

	const Intern &operator=(const Intern &);

	AForm	*makeForm(std::string, std::string);
	AForm	*Shrubbery(std::string);
	AForm	*Robotomy(std::string);
	AForm	*Presidential(std::string);
};

#endif