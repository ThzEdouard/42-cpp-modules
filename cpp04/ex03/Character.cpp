#include "Character.hpp"

Character::Character(std::string const name) : _name(name)
{
    std::cout << "Character("<< _name<<") constructor called !" << std::endl;
    for(int i = 0; i < 4; i++)
        _inv[i] = NULL;
}
Character::Character(const Character &ref) : _name(ref._name)
{
    std::cout << "Character("<< _name <<") copy constructor called !" << std::endl;
    for(int i = 0; i < 4; i++)
        _inv[i] = ((ref._inv[i]) ? ref._inv[i]->clone() : NULL);
}

Character &Character::operator=(const Character &ref)
{

    this->~Character();
    _name = ref._name;
    for(int i = 0; i < 4; i++)
        _inv[i] = ((ref._inv[i]) ? ref._inv[i]->clone() : NULL);
    return *this;
}

Character::~Character()
{
    std::cout << "Character destructor called !" << std::endl;
    for(int i = 0; i < 4; i++)
        if (_inv[i])
            delete _inv[i];
}

std::string const & Character::getName() const
{
    return _name;
}

void Character::equip(AMateria* m)
{
    if (m)
        for(int i = 0; i < 4; i++)
            if (!_inv[i])
            {
                _inv[i] = m;
                break;
            }

}

void Character::unequip(int idx)
{
    if (idx >= 0 && idx <=3)
        _inv[idx] = NULL;
}
void Character::use(int idx, ICharacter& target)
{
    if (idx >= 0 && idx <=3 && _inv[idx])
        _inv[idx]->use(target);
}