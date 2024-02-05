#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm AForm", 145, 137), _target(target){}
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &ref) : AForm(ref), _target(ref._target) {}
ShrubberyCreationForm::~ShrubberyCreationForm(){}
const ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &ref)
{
	if (this != &ref)
		_target = ref._target;
	return *this;
}
void	ShrubberyCreationForm::execute(const Bureaucrat &executor) const
{
	if (!this->getSigned())
		throw AForm::AFormSignException();
	if (executor.getGrade() > this->getGradeToExecute())
		throw AForm::GradeTooLowException();
	std::string filename = _target + "_shrubbery";
    std::ofstream outFile(filename.c_str());
    if (outFile) {
        outFile << "             /\\" << std::endl;
		outFile << "            <  >" << std::endl;
		outFile << "             \\/" << std::endl;
		outFile << "             /\\" << std::endl;
		outFile << "            /  \\" << std::endl;
		outFile << "           /++++\\" << std::endl;
		outFile << "          /  ()  \\" << std::endl;
		outFile << "          /      \\" << std::endl;
		outFile << "         /~`~`~`~`\\" << std::endl;
		outFile << "        /  ()  ()  \\" << std::endl;
		outFile << "        /          \\" << std::endl;
		outFile << "       /*&*&*&*&*&*&\\" << std::endl;
		outFile << "      /  ()  ()  ()  \\" << std::endl;
		outFile << "      /              \\" << std::endl;
		outFile << "     /++++++++++++++++\\" << std::endl;
		outFile << "    /  ()  ()  ()  ()  \\" << std::endl;
		outFile << "    /                  \\" << std::endl;
		outFile << "   /~`~`~`~`~`~`~`~`~`~`\\" << std::endl;
		outFile << "  /  ()  ()  ()  ()  ()  \\" << std::endl;
		outFile << "  /*&*&*&*&*&*&*&*&*&*&*&\\" << std::endl;
		outFile << " /                        \\" << std::endl;
		outFile << "/,.,.,.,.,.,.,.,.,.,.,.,.,.\\" << std::endl;
		outFile << "           |   |" << std::endl;
		outFile << "          |`````|" << std::endl;
		outFile << "          \\_____/" << std::endl;
        outFile.close();
        std::cout << "Shrubbery created in file: " << filename << std::endl;
    } else {
        throw std::runtime_error("Failed to create the shrubbery file!");
    }
}

std::ostream &operator<<(std::ostream &out, const ShrubberyCreationForm &ref)
{
    out << "Shrubbery Creation Form: " << ref.getName() << ", grade to sign: " << ref.getGradeToSign() << ", grade to execute: " << ref.getGradeToExecute() << ", signed: " << ref.getSigned() << std::endl;
    return out;
}
