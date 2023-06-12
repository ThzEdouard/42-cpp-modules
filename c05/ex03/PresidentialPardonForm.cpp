#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", 25, 5), _target(target) {}
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &ref) : AForm(ref), _target(ref._target) {}
PresidentialPardonForm::~PresidentialPardonForm(){}
const PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &ref)
{
	if (this != &ref)
		_target = ref._target;
	return *this;
}

void	PresidentialPardonForm::execute(const Bureaucrat &ref) const
{
	if (!this->getSigned())
		throw AForm::AFormSignException();
	if (ref.getGrade() > this->getGradeToExecute())
		throw AForm::GradeTooLowException();
	std::cout << _target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}