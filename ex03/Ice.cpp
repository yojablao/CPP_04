#include "Ice.hpp"

Ice::Ice():AMateria("ice")
{
    std:: cout << "Ice default constructor" << std::endl;
}
Ice::Ice(const Ice &o):AMateria("ice")
{
    *this = o;
    std:: cout << "Ice default constructor" << std::endl;
}
Ice::~Ice()
{
    std:: cout << "Ice destructor" << std::endl;
}
AMateria *Ice::clone() const
{
    return(new Ice(*this));
}
Ice &Ice::operator=(const Ice &o)
{
    std:: cout << "Ice copy assignment "<< std::endl;
     if (this != &o) 
    {
        AMateria::operator=(o);
        std:: cout << "Ice copy  assignment"<< std::endl;
    }
    return (*this);
}
void Ice::use(ICharacter &target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *"<< std::endl;
}
