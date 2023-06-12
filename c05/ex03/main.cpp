#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
int	main()
{
	std::cout << "\n*** Test 01 ***" << std::endl;
	try
	{
		Intern someRandomIntern;
		AForm* rrf;
		rrf = someRandomIntern.makeForm("RobotomyRequestForm", "Bender");

		Bureaucrat Amanasse("Amanasse", 26);

		if (rrf)
		{
			Amanasse.signAForm(*rrf);
			Amanasse.executeForm(*rrf);
		}
		delete (rrf);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "\n*** Test 02 ***" << std::endl;
	try
	{
		Intern RandomIntern;
		AForm* ptr;
		ptr = RandomIntern.makeForm("PresidentialPardonForm", "LOL");

		Bureaucrat Juchene("Juchene", 1);

		if(ptr)
		{
			Juchene.signAForm(*ptr);
			Juchene.executeForm(*ptr);
		}
		delete ptr;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	return (0);
}