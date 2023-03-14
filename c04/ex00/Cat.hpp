#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
	public:
		Cat();
		Cat(const Cat &ref);
		~Cat();
		std::string getType() const;
		void makeSound() const ;
		const Cat &operator=(const Cat &ref);
};

#endif