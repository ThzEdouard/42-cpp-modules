#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45), _target(target) {}
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &ref) : AForm(ref), _target(ref._target) {}
RobotomyRequestForm::~RobotomyRequestForm(){}
const RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &ref)
{
	if (this != &ref)
		_target = ref._target;
	return *this;
}

void	RobotomyRequestForm::execute(const Bureaucrat &ref) const
{
	if (!this->getSigned())
		throw AForm::AFormSignException();
	if (ref.getGrade() > this->getGradeToExecute())
		throw AForm::GradeTooLowException();
	std::cout << " drilling noises" << std::endl;
	if (rand() % 2)
		std::cout << _target << " has been robotomized successfull!" << std::endl;
	else
		 std::cout << "Robotomy failed for " << _target << "!" << std::endl;
}

std::ostream &operator<<(std::ostream &out, const RobotomyRequestForm &ref)
{
    out << "Robotomy Creation Form: " << ref.getName() << ", grade to sign: " << ref.getGradeToSign() << ", grade to execute: " << ref.getGradeToExecute() << ", signed: " << ref.getSigned() << std::endl;
    return out;
}