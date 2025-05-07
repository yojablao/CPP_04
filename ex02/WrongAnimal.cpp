#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std:: cout << "WrongAnimal default constructor" << std::endl;
    this -> type = "WrongAnimal";
}
WrongAnimal::~WrongAnimal()
{
    std:: cout << "WrongAnimal destructor" << std::endl;
}
WrongAnimal &WrongAnimal::operator=(const WrongAnimal&o)
{
    std:: cout << "WrongAnimal copy assignment "<< std::endl;
    if(this != &o)
        this->type = o.type;
    return *this;
}


void WrongAnimal::makeSound() const
{
    std:: cout << "WrongAnimal Sound "<< std::endl;
}
WrongAnimal::WrongAnimal(const WrongAnimal & o)
{
    std:: cout << "WrongAnimal copy constructor "<< std::endl;
    if(this != &o)
        *this = o;
}
std::string WrongAnimal::getType()const {return(type);}