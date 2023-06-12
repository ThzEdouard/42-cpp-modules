#include "Intern.hpp"

Intern::Intern(){}
Intern::Intern(const Intern &ref)
{
	*this = ref;
}
Intern::~Intern(){}

const Intern &Intern::operator=(const Intern &ref)
{
	(void)ref;
	return *this;
}

AForm	*Intern::Shrubbery(std::string target)
{
	return (new ShrubberyCreationForm(target));
}

AForm	*Intern::Robotomy(std::string target)
{
	return (new RobotomyRequestForm(target));
}


AForm	*Intern::Presidential(std::string target)
{
	return (new PresidentialPardonForm(target));
}

AForm	*Intern::makeForm(std::string name, std::string target)
{

	std::string names[3] = {"ShrubberyCreationForm", "RobotomyRequestForm", "PresidentialPardonForm"};
	AForm *(Intern::*f[3])(std::string) = { &Intern::Shrubbery, &Intern::Robotomy, &Intern::Presidential};

	for (int i = 0; i < 3; i++)
	{
		if (name == names[i])
			return ((this->*f[i])(target));
	}
	return NULL;
}