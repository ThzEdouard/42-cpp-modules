#ifndef FORM_HPP
# define FORM_HPP

# include <string>
# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:
	const std::string	_name;
	const int			_gradetosign;
	const int			_gradetoexecute;
	bool				_signed;
public:
	Form(const std::string, const int, const int);
	Form(const Form &);
	~Form();
	const Form	&operator=(const Form &);

	std::string	getName() const;
	int			getGradeToExecute() const;
	int			getGradeToSign() const;
	bool		getSigned() const;

	void		beSigned(const Bureaucrat &);

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

std::ostream &operator<<(std::ostream &os, const Form &);

#endif