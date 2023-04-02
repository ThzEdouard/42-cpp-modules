#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include <string>

#include "ICharacter.hpp"

 class ICharacter;
class AMateria
{
protected:
    std::string _type;
public:
    AMateria(std::string const & type);
    AMateria(const AMateria &ref);
    ~AMateria();
    AMateria &operator=(const AMateria &ref);
    std::string const & getType() const; //Returns the materia type
    virtual AMateria* clone() const = 0;
    virtual void use(ICharacter& target);

};
#endif