
#include "Dog.hpp"
#include "Cat.hpp"
#include "Animal.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"

# define END    "\x1b[0m"
# define GREY   "\x1b[30m"
# define RED    "\x1b[31m"
# define GREEN  "\x1b[32m"
# define YELOW  "\x1b[33m"
# define BLUE   "\x1b[34m"
# define PURPLE "\x1b[35m"
# define CYAN   "\x1b[36m"
# define WHITE  "\x1b[37m"

int main(void)
{
    std::cout << YELOW << "Creating constructor for the class Animal(void), Cat(luna), Dog(reglise) !" << END << std::endl;
    Animal *animal = new Animal();
    Animal *reglise = new Dog("reglise");
    Animal *luna = new Cat("luna");
    std::cout << GREEN << "called the function makeSound for the class ! (Animal, Cat, Dog)" << END << std::endl;
    animal->makeSound();
    luna->makeSound();
    reglise->makeSound();
    std::cout << BLUE << "called type for the Animal("<< animal->getType() <<") !" << END << std::endl;
    std::cout << BLUE << "called type for the Cat("<< luna->getType() <<") !" << END << std::endl;
    std::cout << BLUE << "called type for the Dog("<< reglise->getType() <<") !" << END << std::endl;
    std::cout << RED << "destructor called for the class !(Animal, Cat, Dog)" << END << std::endl;
    delete animal;
    delete luna;
    delete reglise;
    std::cout << YELOW << "creating WrongAnimal and WrongCat testing the class is not virtual void makeSound()"<< END << std::endl;
    WrongAnimal *wanimal = new WrongCat();
    WrongCat *wcat = new WrongCat("luna");
    std::cout << GREEN << "WrongAnimal and WrongCat called getType and makeSound " << END << std::endl;
    std::cout << "WrongAnimal type " << wanimal->getType() << " makeSound "; wanimal->makeSound();
    std::cout << "WrongCat type " << wcat->getType() << " makeSound "; wcat->makeSound();
    std::cout << RED << "destructor called for the class !(WrongAnimal, WrongCat)" << END << std::endl;
    delete wanimal;
    delete wcat;
    return (0);
}