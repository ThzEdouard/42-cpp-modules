#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <string>
# include <iostream>

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