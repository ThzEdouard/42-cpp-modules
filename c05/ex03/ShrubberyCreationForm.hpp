#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"
#include <fstream>
class ShrubberyCreationForm : public AForm
{
private:
	std::string	_target;
public:
	ShrubberyCreationForm(std::string);
	ShrubberyCreationForm(const ShrubberyCreationForm &);
	virtual ~ShrubberyCreationForm();
	const ShrubberyCreationForm &operator=(const ShrubberyCreationForm &);

	void	execute(const Bureaucrat &) const;
};

std::ostream &operator<<(std::ostream &os, const ShrubberyCreationForm &);

#endif