#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"
class Cat : public Animal{

private:
    Brain *_brain;
public:
    Cat();
    Cat(std::string);
    Cat(const Cat &ref);
    ~Cat();
    Cat &operator=(const Cat &ref);

    virtual void makeSound() const;
    Brain *getBrain() const;

};


#endif
