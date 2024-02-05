#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"

class Character : public ICharacter{
private:
    std::string _name;
    AMateria *_inv[4];
public:
    Character(std::string const);
    Character(const Character &ref);
    ~Character();
    Character &operator=(const Character &ref);

    std::string const & getName() const;
    void equip(AMateria* m);
    void unequip(int idx);
    void use(int idx, ICharacter& target);

};


#endif
