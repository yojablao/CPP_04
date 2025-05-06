#include "Cure.hpp"

Cure::Cure():AMateria("cure")
{
}
Cure::Cure(const Cure &o):AMateria("cure")
{
    *this = o;
}
Cure::~Cure()
{
}
AMateria *Cure::clone() const
{
    return(new Cure(*this));
}
Cure &Cure::operator=(const Cure &o)
{
     if (this != &o) 
    {
        AMateria::operator=(o);
    }
    return (*this);
}
void Cure::use(ICharacter &target)
{
    std::cout << "* heals  " << target.getName() << "’s wounds *"<<std::endl;
}
