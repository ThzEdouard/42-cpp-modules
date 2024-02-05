#include "AForm.hpp"

AForm::AForm(const std::string name, const int gradetosign, const int gradetoexecute) : _name(name), _gradetosign(gradetosign), _gradetoexecute(gradetoexecute), _signed(false){}
AForm::AForm(const AForm &ref) : _name(ref._name), _gradetosign(ref._gradetosign), _gradetoexecute(ref._gradetoexecute), _signed(ref._signed){}
AForm::~AForm(){}

const AForm	&AForm::operator=(const AForm &ref)
{
	if (this != &ref)
		_signed = ref._signed;
	return *this;
}

std::string	AForm::getName() const
{
	return (_name);
}
int			AForm::getGradeToExecute() const
{
	return (_gradetoexecute);
}
int			AForm::getGradeToSign() const
{
	return (_gradetosign);
}
bool		AForm::getSigned() const
{
	return (_signed);
}

void		AForm::beSigned(const Bureaucrat &ref)
{
	if (ref.getGrade() <= _gradetosign)
		_signed = true;
	else
		throw AForm::GradeTooLowException();
}

const char* AForm::AFormSignException::what() const throw()
{
	return ("AFom is not signed !");
}

const char* AForm::GradeTooHighException::what() const throw()
{
	return ("Grade is too Hight !");
}

const char* AForm::GradeTooLowException::what() const throw()
{
	return ("Grade is too Low !");
}

std::ostream &operator<<(std::ostream &os, const AForm &val)
{
	os << "name AForm " << val.getName() << " Grade to signed " << val.getGradeToSign() << " Grade to execute " << val.getGradeToExecute() << " AForm signed " << val.getSigned();
	return (os);
}