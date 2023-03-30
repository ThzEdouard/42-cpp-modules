#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal {

protected:
    std::string type;
public:
    WrongAnimal();
    WrongAnimal(std::string);
    WrongAnimal(const WrongAnimal &ref);
    const WrongAnimal &operator=(const WrongAnimal &ref);
    ~WrongAnimal();

    void makeSound() const;
    std::string getType() const;
};


#endif
