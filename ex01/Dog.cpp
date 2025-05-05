#include "Dog.hpp"

Dog::Dog()
{
    this -> type = "Dog";
    std:: cout << "Dog default constructor" << std::endl;
    brain = new Brain;
}
Dog::~Dog()
{
    delete brain;
    std:: cout << "Dog destructor" << std::endl;
}
Dog &Dog::operator=(const Dog&o)
{
    this->type = o.type;
    this->brain = o.brain;
    std:: cout << "Dog copy assignment "<< std::endl;
    return (*this);
}

void Dog::makeSound() const
{
    std:: cout << "Woof! Woof!"<< std::endl;
}
Dog::Dog(const Dog & o)
{    
    if(&o != this)
        *this = o;
    std:: cout << "Dog copy constructor "<< std::endl;
}