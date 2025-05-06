// Character.cpp
#include "Character.hpp"

Character::Character(std::string const & name) : _name(name) {
    for (int i = 0; i < 4; ++i)
        stor[i] = nullptr;
}

Character::Character(const Character& other) : _name(other._name) {
    for (int i = 0; i < 4; ++i) {
        if (other.stor[i])
            stor[i] = other.stor[i]->clone();
        else
            stor[i] = nullptr;
    }
}

Character& Character::operator=(const Character& other) {
    if (this != &other) {
        _name = other._name;
        for (int i = 0; i < 4; ++i) {
            delete stor[i];
            if (other.stor[i])
                stor[i] = other.stor[i]->clone();
            else
                stor[i] = nullptr;
        }
    }
    return *this;
}

Character::~Character()
{
    for (int i = 0; i < 4; ++i)
    {
        if(stor[i] != nullptr)
            delete stor[i];
    } 
}

std::string const & Character::getName() const {
    return _name;
}

// Character.cpp (updated)
void Character::equip(AMateria* m) {
    if (!m) return;
    for (int i = 0; i < 4; ++i) {
        if (!stor[i]) {
            stor[i] = m->clone(); // Clone the materia
            return;
        }
    }
    delete m; // Delete if inventory is full (optional)
}

void Character::unequip(int idx) {
    if (idx < 0 || idx >= 4) return;
    delete stor[idx];
    stor[idx] = nullptr;
}

void Character::use(int idx, ICharacter& target) {
    if (idx < 0 || idx >= 4) return;
    if (stor[idx])
        stor[idx]->use(target);
}
