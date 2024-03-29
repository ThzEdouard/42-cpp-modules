#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal {

protected:
    std::string type;
public:
    Animal();
    Animal(std::string);
    Animal(const Animal &ref);
    Animal &operator=(const Animal &ref);
    virtual ~Animal();

    virtual void makeSound() const;
    std::string getType() const;
};


#endif
