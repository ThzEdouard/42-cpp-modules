#include "Form.hpp"

Form::Form(const std::string name, const int gradetosign, const int gradetoexecute) : _name(name), _gradetosign(gradetosign), _gradetoexecute(gradetoexecute), _signed(false){}
Form::Form(const Form &ref) : _name(ref._name), _gradetosign(ref._gradetosign), _gradetoexecute(ref._gradetoexecute), _signed(ref._signed){}
Form::~Form(){}

const Form	&Form::operator=(const Form &ref)
{
	if (this != &ref)
		_signed = ref._signed;
	return *this;
}

std::string	Form::getName() const
{
	return (_name);
}
int			Form::getGradeToExecute() const
{
	return (_gradetoexecute);
}
int			Form::getGradeToSign() const
{
	return (_gradetosign);
}
bool		Form::getSigned() const
{
	return (_signed);
}

void		Form::beSigned(const Bureaucrat &ref)
{
	if (ref.getGrade() <= _gradetosign)
		_signed = true;
	else
		throw Form::GradeTooLowException();
}

const char* Form::GradeTooHighException::what() const throw()
{
	return ("Grade is too Hight !");
}

const char* Form::GradeTooLowException::what() const throw()
{
	return ("Grade is too Low !");
}

std::ostream &operator<<(std::ostream &os, const Form &val)
{
	os << "name Form " << val.getName() << " Grade to signed " << val.getGradeToSign() << " Grade to execute " << val.getGradeToExecute() << " Form signed " << val.getSigned();
	return (os);
}