#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main ()
{
    // std::cout << "\n*** Test 01 ***"  << std::endl;
    // try
    // {
    //     PresidentialPardonForm Jean("Jean");
    //     Bureaucrat Amanasse("Amanasse", 26);
    //     std::cout << Amanasse << std::endl;
    //     std::cout << Jean << std::endl;
    //     Amanasse.signAForm(Jean);
    //     Amanasse.executeForm(Jean);
    // }
    // catch (std::exception & e)
    // {
    //     std::cout << e.what() << std::endl;
    // }


    // std::cout << "\n*** Test 02 ***"  << std::endl;
    // try
    // {
    //     Bureaucrat MedeSou("MedeSou", 1);
    //     RobotomyRequestForm Jacques("Jacques");
    //     std::cout << MedeSou << std::endl;
    //     std::cout << Jacques << std::endl;
    //     MedeSou.signAForm(Jacques);
    //     MedeSou.executeForm(Jacques);
    // }
    // catch (std::exception & e)
    // {
    //     std::cout << e.what() << std::endl;
    // }


    std::cout << "\n*** Test 03 ***"  << std::endl;
    try
    {
        Bureaucrat Juchene("Juchene", 75);
        ShrubberyCreationForm Shrub("Giles");

        std::cout << Juchene << std::endl;
        std::cout << Shrub << std::endl;

        Juchene.signAForm(Shrub);
        Juchene.executeForm(Shrub);
        std::cout << Shrub << std::endl;
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
    return (0);
}