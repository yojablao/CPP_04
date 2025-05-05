#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    this -> type = "WrongCat";
    std:: cout << "WrongCat default constructor" << std::endl;
}
WrongCat::~WrongCat()
{
    std:: cout << "WrongCat destructor" << std::endl;
}
WrongCat &WrongCat::operator=(const WrongCat&o)
{
    this->type = o.type;
    std:: cout << "WrongCat copy assignment "<< std::endl;
    return (*this);
}

void WrongCat::makeSound() const
{
    std:: cout << "Meow!"<< std::endl;
}
WrongCat::WrongCat(const WrongCat & o):WrongAnimal(o)
{
    std:: cout << "WrongCat copy constructor "<< std::endl;
    *this = o;
}