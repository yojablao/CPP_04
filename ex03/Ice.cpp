#include "Ice.hpp"

Ice::Ice():AMateria("ice")
{

}
Ice::Ice(const Ice &o):AMateria("ice")
{
    *this = o;

}
Ice::~Ice(){}
AMateria *Ice::clone() const
{
    return(new Ice(*this));
}
Ice &Ice::operator=(const Ice &o)
{

     if (this != &o) 
    {AMateria::operator=(o);}
    return (*this);
}
void Ice::use(ICharacter &target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *"<< std::endl;
}
