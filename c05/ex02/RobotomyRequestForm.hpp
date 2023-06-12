#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"
#include <math.h>
class RobotomyRequestForm : public AForm
{
private:
	std::string	_target;
public:
	RobotomyRequestForm(std::string);
	RobotomyRequestForm(const RobotomyRequestForm &);
	~RobotomyRequestForm();
	const RobotomyRequestForm &operator=(const RobotomyRequestForm &);

	void	execute(const Bureaucrat &) const;
};

std::ostream &operator<<(std::ostream &os, const RobotomyRequestForm &);

#endif