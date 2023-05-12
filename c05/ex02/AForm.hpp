#ifndef AForm_HPP
# define AForm_HPP

# include <string>
# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
private:
	const std::string	_name;
	const int			_gradetosign;
	const int			_gradetoexecute;
	bool				_signed;
public:
	AForm(const std::string, const int, const int);
	AForm(const AForm &);
	virtual ~AForm();
	const AForm	&operator=(const AForm &);

	std::string	getName() const;
	int			getGradeToExecute() const;
	int			getGradeToSign() const;
	bool		getSigned() const;

	void		beSigned(const Bureaucrat &);
	virtual void	execute(Bureaucrat const & executor) const = 0;

	class AFormSignException : public std::exception
    {
        public:
        virtual const char* what() const throw();
    };
	class GradeTooHighException : public std::exception
    {
        public:
        virtual const char* what() const throw();
    };
	class GradeTooLowException : public std::exception
    {
        public:
            virtual const char* what() const throw();
    };
};

std::ostream &operator<<(std::ostream &os, const AForm &);

#endif