#include "Bureaucrat.hpp"

int	main()
{
	try
	{
		Bureaucrat bob("bob", 50);
		Form	form1("formbob", 50, 51);
		std::cout << bob << std::endl;
		bob.decrement();
		std::cout << bob << std::endl;
		bob.increment();
		bob.signForm(form1);
		std::cout << bob << std::endl;
		for(int i = 0; i < 50; i++)
			bob.increment();
		for(int i = 0; i < 50; i++)
			bob.decrement();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}


	try
	{
		Bureaucrat jim("jim", 2);
		Form form2("formjim", 1, 5);

		jim.signForm(form2);
		std::cout << jim << std::endl;
		jim.decrement();
		std::cout << jim << std::endl;
		jim.increment();
		std::cout << jim << std::endl;
		for(int i = 0; i < 150; i++)
			jim.decrement();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}


	try
	{
		Bureaucrat jim("jim", 0);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		Bureaucrat jim("jim", 151);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (0);
}