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
    const Animal &operator=(const Animal &ref);
    virtual ~Animal() = 0;
    virtual void makeSound() const;
    std::string getType() const;
};


#endif //ANIMAL_HPP
