#include "AAnimal.hpp"

AAnimal::AAnimal()
{
    this -> type = "AAnimal";
    std:: cout << "AAnimal default constructor" << std::endl;
}
AAnimal::~AAnimal()
{
    std:: cout << "AAnimal destructor" << std::endl;
}
AAnimal &AAnimal::operator=(const AAnimal&o)
{
    std:: cout << "AAnimal copy assignment "<< std::endl;
    this->type = o.type;
    return *this;
}
AAnimal::AAnimal(const AAnimal & o)
{
    *this = o;
    std:: cout << "AAnimal copy constructor "<< std::endl;
}
std::string AAnimal::getType()const {return(type);}