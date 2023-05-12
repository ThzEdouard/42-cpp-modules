#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm AForm", 145, 137), _target(target){}
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &ref) : AForm("ShrubberyCreationForm AForm", 145, 137), _target(ref._target) {}
ShrubberyCreationForm::~ShrubberyCreationForm(){}
const ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &ref)
{
	if (this != &ref)
		_target = ref._target;
	return *this;
}
void	ShrubberyCreationForm::executeAction(const Bureaucrat &executor) const
{
	AForm::execute(executor);

	std::string filename = _target + "_shrubbery";
    std::ofstream outFile(filename);
    if (outFile) {
        outFile << "" << std::endl;
        outFile.close();
        std::cout << "Shrubbery created in file: " << filename << std::endl;
    } else {
        throw std::runtime_error("Failed to create the shrubbery file!");
    }
}
