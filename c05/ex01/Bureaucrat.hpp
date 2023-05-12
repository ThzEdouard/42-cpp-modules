#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <string>
# include <iostream>
#include "Form.hpp"

class Form;

class Bureaucrat
{
private:
	const std::string	_name;
	int					_grade;
public:
	Bureaucrat(const std::string, int);
	Bureaucrat(const Bureaucrat &);
	~Bureaucrat();
	const Bureaucrat &operator=(const Bureaucrat &);

	std::string	getName() const;
	int			getGrade() const;
	void		increment();
	void		decrement();

	void		signForm(Form &);

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

std::ostream &operator<<(std::ostream &os, const Bureaucrat &);

#endif