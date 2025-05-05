#include "Animal.hpp"

Animal::Animal()
{
    this -> type = "Animal";
    std:: cout << "Animal default constructor" << std::endl;
}
Animal::~Animal()
{
    std:: cout << "Animal destructor" << std::endl;
}
Animal &Animal::operator=(const Animal&o)
{
    this->type = o.type;
    std:: cout << "Animal copy assignment "<< std::endl;
    return *this;
}


void Animal::makeSound() const
{
    std:: cout << "Animal Sound "<< std::endl;
}
Animal::Animal(const Animal & o)
{
    *this = o;
    std:: cout << "Animal copy constructor "<< std::endl;
}
std::string Animal::getType()const {return(type);}