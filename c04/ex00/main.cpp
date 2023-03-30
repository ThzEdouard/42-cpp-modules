
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
    Animal animal;
    Dog reglise("reglise");
    Cat luna("luna");
    std::cout << GREEN << "Creating constructor copy for the class Animal, Cat, Dog !" << END << std::endl;
    Animal canimal(animal);
    Dog creglise(reglise);
    Cat cluna(luna);
    std::cout << GREEN << "called the function makeSound for the class ! (Animal, Cat, Dog)" << END << std::endl;
    animal.makeSound();
    luna.makeSound();
    reglise.makeSound();
    std::cout << GREEN << "called the function makeSound for the copy class ! (Animal, Cat, Dog)" << END << std::endl;
    canimal.makeSound();
    cluna.makeSound();
    creglise.makeSound();
    std::cout << BLUE << "called type for the Animal("<< animal.getType() <<") ans called for the copy Animal("<<canimal.getType()<< ") !" << END << std::endl;
    std::cout << BLUE << "called type for the Cat("<< luna.getType() <<") ans called for the copy Cat("<<cluna.getType()<< ") !" << END << std::endl;
    std::cout << BLUE << "called type for the Dog("<< reglise.getType() <<") ans called for the copy Dog("<<creglise.getType()<< ") !" << END << std::endl;

    std::cout << YELOW << "creating WrongAnimal and WrongCat testing the class is not virtual void makeSound()"<< END << std::endl;
    WrongAnimal wanimal("vache");
    WrongCat wcat("cat");
    std::cout << GREEN << "WrongAnimal and WrongCat called getType and makeSound " << END << std::endl;
    std::cout << "WrongAnimal type " << wanimal.getType() << " makeSound "; wanimal.makeSound();
    std::cout << "WrongCat type " << wcat.getType() << " makeSound "; wcat.makeSound();
    std::cout << RED << "destructor called for the class !" << END << std::endl;
    return (0);
}