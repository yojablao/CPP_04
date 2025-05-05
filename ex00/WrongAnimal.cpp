#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    this -> type = "WrongAnimal";
    std:: cout << "WrongAnimal default constructor" << std::endl;
}
WrongAnimal::~WrongAnimal()
{
    std:: cout << "WrongAnimal destructor" << std::endl;
}
WrongAnimal &WrongAnimal::operator=(const WrongAnimal&o)
{
    this->type = o.type;
    std:: cout << "WrongAnimal copy assignment "<< std::endl;
    return *this;
}


void WrongAnimal::makeSound() const
{
    std:: cout << "WrongAnimal Sound "<< std::endl;
}
WrongAnimal::WrongAnimal(const WrongAnimal & o)
{
    std:: cout << "WrongAnimal copy constructor "<< std::endl;
    *this = o;
}
std::string WrongAnimal::getType()const {return(type);}