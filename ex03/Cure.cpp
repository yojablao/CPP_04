#include "Cure.hpp"

Cure::Cure():AMateria("Cure")
{
    std:: cout << "Cure default constructor" << std::endl;
}
Cure::Cure(const Cure &o):AMateria("Cure")
{
    *this = o;
    std:: cout << "Cure default constructor" << std::endl;
}
Cure::~Cure()
{
    std:: cout << "Cure destructor" << std::endl;
}
AMateria *Cure::clone() const
{
    return(new Cure(*this));
}
Cure &Cure::operator=(const Cure &o)
{
    std:: cout << "Cure copy assignment "<< std::endl;
     if (this != &o) 
    {
        AMateria::operator=(o);
        std:: cout << "Cure copy  assignment"<< std::endl;
    }
    return (*this);
}
void Cure::use(ICharacter &target)
{
    std::cout << "* heals  " << target.getName() << "’s wounds *"<<std::endl;
}
