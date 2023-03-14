#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public:
		WrongCat();
		WrongCat(const WrongCat &ref);
		~WrongCat();
		std::string getType() const;
		void makeSound() const ;
		const WrongCat &operator=(const WrongCat &ref);
};

#endif