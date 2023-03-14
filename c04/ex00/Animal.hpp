#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>
#include <iostream>

class Animal {
	public:
		Animal();
		Animal(const Animal &ref);
		~Animal();
		std::string getType() const;
		virtual void  makeSound() const;
		const Animal &operator=(const Animal &ref);
	protected:
		std::string type;
};
#endif
