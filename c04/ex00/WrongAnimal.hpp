#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <string>
# include <iostream>

class WrongAnimal
{

	public:
		WrongAnimal();
		WrongAnimal(const WrongAnimal &ref);
		std::string getType() const;
		void  makeSound() const;
		const WrongAnimal &operator=(const WrongAnimal &ref);
		~WrongAnimal();
	protected:
		std::string type;
};

#endif