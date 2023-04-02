#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal{

private:
    Brain *_brain;
public:
    Dog();
    Dog(std::string);
    Dog(const Dog &ref);
    ~Dog();
    Dog &operator=(const Dog &ref);

    virtual void makeSound() const;
    Brain *getBrain() const;
};


#endif
