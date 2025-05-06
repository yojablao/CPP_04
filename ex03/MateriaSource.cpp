
#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
    for (int i = 0; i < 4; ++i)
        _materias[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource& other) {
    for (int i = 0; i < 4; ++i)
        _materias[i] = other._materias[i] ? other._materias[i]->clone() : NULL;
}

MateriaSource& MateriaSource::operator=(const MateriaSource& other) {
    if (this != &other) {
        for (int i = 0; i < 4; ++i) {
            delete _materias[i];
            _materias[i] = other._materias[i] ? other._materias[i]->clone() : NULL;
        }
    }
    return *this;
}

MateriaSource::~MateriaSource() {
    for (int i = 0; i < 4; ++i)
        delete _materias[i];
}

void MateriaSource::learnMateria(AMateria* m) {
    if (!m) return;
    for (int i = 0; i < 4; ++i) {
        if (!_materias[i]) {
            _materias[i] = m->clone();
            delete m;
            return;
        }
    }
    delete m; 
}

AMateria* MateriaSource::createMateria(const std::string& type) {
    for (int i = 0; i < 4; ++i) {
        if (_materias[i] && _materias[i]->getType() == type)
            return _materias[i]->clone();
    }


    return NULL;
}
