#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string name, int grade) : _name(name), _grade(grade)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat &ref) : _name(ref._name), _grade(ref._grade){}

Bureaucrat::~Bureaucrat(){}

const Bureaucrat &Bureaucrat::operator=(const Bureaucrat &ref)
{
	if (this != &ref)
        _grade = ref.getGrade();
    return *this;
}

std::string	Bureaucrat::getName() const
{
	return (_name);
}

int			Bureaucrat::getGrade() const
{
	return (_grade);
}

void		Bureaucrat::increment()
{
	if (_grade <= 1)
		throw Bureaucrat::GradeTooHighException();
	_grade--;
}
void		Bureaucrat::decrement()
{
	if (_grade >= 150)
		throw Bureaucrat::GradeTooLowException();
	_grade++;
}

void		Bureaucrat::signForm(Form &form)
{
	try
	{
		form.beSigned(*this);
		std::cout << "The bureaucrat "<< _name << " signed " << form.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << "The bureaucrat " << _name << " couldn’t sign  " << form.getName() << " because " << e.what() << std::endl;
	}
	
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade is too Hight !");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade is too Low !");
}

std::ostream &operator<<(std::ostream &os, const Bureaucrat &val)
{
	os << val.getName() << ", bureaucrat grade " << val.getGrade();
	return (os);
}