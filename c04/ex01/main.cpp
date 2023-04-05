
#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>
#include <string>

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
    Animal *animal[10];
    //dog in to 0,4 and cat in to 5,9;
    int dog_x = 3, cat_y  = 6;
    std::cout << BLUE << "Copy Dog nº" << dog_x << END << std::endl;
    std::cout << BLUE << "Copy Cat nº" << cat_y << END << std::endl;
    for(int i = 0; i < 10; i++)
        ((i < 5) ? animal[i] = new Dog() : animal[i] = new Cat());
    Dog copy_dog(*(Dog*)animal[dog_x]);
    Cat copy_cat(*(Cat*)animal[cat_y]);
    std::cout << YELOW << "Check in to the copy cat !" << END << std::endl;
    for(int i = 0; i < 100; i++)
    {
        if (copy_cat.getBrain()->getIdeas(i) != ((Cat *)animal[cat_y])->getBrain()->getIdeas(i))
            return (std::cout << RED << "A difference in cat was found cat" << END << std::endl,0);
    }
    std::cout << GREEN << "The cat has no difference" << END << std::endl;
	std::cout << YELOW << "Check in to the copy dog !" << END << std::endl;
    for(int i = 0; i < 100; i++)
    {
        if (copy_dog.getBrain()->getIdeas(i) != ((Dog *)animal[dog_x])->getBrain()->getIdeas(i))
            return (std::cout << RED << "A difference in dog was found dog" << END << std::endl,0);
    }
    std::cout << GREEN << "The dog has no difference" << END << std::endl;
    for (int i = 0; i < 10; i++)
        delete animal[i];
    return (0);
}