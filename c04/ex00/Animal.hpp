#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{
protected:
	std::string _type;
public:
	Animal(std::string);
	void	makeSound();
	~Animal();
};

#endif