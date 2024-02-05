#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    std::cout << "MateriaSource default constructor called !" << std::endl;
    for(int i = 0; i < 4; i++)
        _materia[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &ref)
{
    std::cout << "MateriaSource copy constructor called !" << std::endl;
    for(int i = 0; i < 4; i++)
        _materia[i] = ((ref._materia[i]) ? ref._materia[i]->clone() : NULL);
}

MateriaSource::~MateriaSource()
{
    std::cout << "MateriaSource destructor called !" << std::endl;
    for(int i = 0; i < 4; i++)
        if (_materia[i])
            delete _materia[i];
}
MateriaSource &MateriaSource::operator=(const MateriaSource &ref)
{
    this->~MateriaSource();
    for(int i = 0; i < 4; i++)
        _materia[i] = ((ref._materia[i]) ? ref._materia[i]->clone() : NULL);
    return *this;
}


void MateriaSource::learnMateria(AMateria* m)
{
    if (m)
        for(int i = 0; i < 4; i++)
            if (!_materia[i])
            {
                _materia[i] = m;
                break;
            }
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
    for (int i = 0; i < 4; i++)
    {
        if (_materia[i] && _materia[i]->getType() == type)
            return _materia[i]->clone();
    }
    return NULL;
}