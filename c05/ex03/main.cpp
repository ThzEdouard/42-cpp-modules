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

		Bureaucrat doudou("doudou", 26);

		if (rrf)
		{
			doudou.signAForm(*rrf);
			doudou.executeForm(*rrf);
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

		Bureaucrat coco("coco", 1);

		if(ptr)
		{
			coco.signAForm(*ptr);
			coco.executeForm(*ptr);
		}
		delete ptr;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	return (0);
}