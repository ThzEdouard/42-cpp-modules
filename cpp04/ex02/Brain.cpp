#include "Brain.hpp"

Brain::Brain()
{
    std::string tests[] = {"is eating !","is sleeping !", "is running !", "is drinking !", "is playing !", "is washing !"};
    for(int i = 0; i < 100; i++)
        _ideas[i] = tests[rand() % 6];
    std::cout << "Brain default constructor called !" << std::endl;
}

Brain::Brain(const Brain &ref)
{
    for (int i = 0; i < 100; i++)
        _ideas[i] = ref._ideas[i];
    std::cout << "Brain copy constructor called !" << std::endl;
}

Brain &Brain::operator=(const Brain &ref)
{
    for(int i = 0; i < 100; i++)
        _ideas[i] = ref._ideas[i];
    return *this;
}
std::string Brain::getIdeas(int i) const
{
    return _ideas[i];
}
Brain::~Brain()
{
    std::cout << "Brain destructor called !" << std::endl;
}