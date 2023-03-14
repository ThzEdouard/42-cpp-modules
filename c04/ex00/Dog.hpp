#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
public:
	Dog();
	Dog(const Dog &ref);
	~Dog();
	std::string getType() const;
	void makeSound() const;
	const Dog &operator=(const Dog &ref);
};

#endif