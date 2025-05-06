#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

#include <string>
class ICharacter;
class AMateria 
{
protected:
    std::string type;

public:
    AMateria(std::string const &type);
    AMateria(const AMateria &type);
    virtual ~AMateria() {}
    virtual AMateria &operator=(const AMateria &o);
    std::string const & getType() const;

    virtual AMateria* clone() const = 0;

    virtual void use(ICharacter& target);
};
#endif