#include "Dog.hpp"

Dog::Dog()
{
    this -> type = "Dog";
    std:: cout << "Dog default constructor" << std::endl;
}
Dog::~Dog()
{
    std:: cout << "Dog destructor" << std::endl;
}

Dog &Dog::operator=(const Dog&o)
{
    this->type = o.type;
    std:: cout << "Dog copy assignment "<< std::endl;
    return(*this);
}

void Dog::makeSound()const
{
    std:: cout << "Woof! Woof!" << std::endl;
}
Dog::Dog(const Dog & o):Animal(o)
{
    if(&o != this)
        *this = o;
    std:: cout << "Dog copy constructor "<< std::endl;
}