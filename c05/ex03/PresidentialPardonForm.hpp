#ifndef PRESIDENTIALPARDONFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
private:
	std::string _target;
public:
	PresidentialPardonForm(std::string);
	PresidentialPardonForm(const PresidentialPardonForm &);
	~PresidentialPardonForm();
	const PresidentialPardonForm &operator=(const PresidentialPardonForm &);

	void	execute(const Bureaucrat &) const;
};

std::ostream &operator<<(std::ostream &os, const PresidentialPardonForm &);

#endif