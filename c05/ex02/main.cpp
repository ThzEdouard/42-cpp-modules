#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main ()
{
    std::cout << "\n*** Test 01 ***"  << std::endl;
    try
    {
        PresidentialPardonForm coco("coco");
        Bureaucrat doudou("doudou", 26);
        std::cout << doudou << std::endl;
        std::cout << coco << std::endl;
        doudou.signAForm(coco);
        doudou.executeForm(coco);
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }


    std::cout << "\n*** Test 02 ***"  << std::endl;
    try
    {
        Bureaucrat fla("fla", 1);
        RobotomyRequestForm elo("elo");
        std::cout << fla << std::endl;
        std::cout << elo << std::endl;
        fla.signAForm(elo);
        fla.executeForm(elo);
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }


    std::cout << "\n*** Test 03 ***"  << std::endl;
    try
    {
        Bureaucrat jim("jim", 75);
        ShrubberyCreationForm lola("Giles");

        std::cout << jim << std::endl;
        std::cout << lola << std::endl;

        jim.signAForm(lola);
        jim.executeForm(lola);
        std::cout << lola << std::endl;
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
    return (0);
}