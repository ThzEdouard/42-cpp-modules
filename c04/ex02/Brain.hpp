#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <math.h>
#include <iostream>
#include <string>

class Brain {

private:
    std::string _ideas[100];
public:
    Brain();
    Brain(const Brain &ref);
     ~Brain();

    Brain &operator=(const Brain &ref);
    std::string getIdeas(int) const;

};


#endif
