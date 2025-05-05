#include "Cat.hpp"

Cat::Cat()
{
    this -> type = "Cat";
    std:: cout << "Cat default constructor" << std::endl;
    brain = new Brain;
}
Cat::~Cat()
{
    delete brain;
    std:: cout << "Cat destructor" << std::endl;
}
Cat &Cat::operator=(const Cat&o)
{
    this->type = o.type;
    this->brain = o.brain;
    std:: cout << "Cat copy assignment "<< std::endl;
    return (*this);
}

void Cat::makeSound() const
{
    std:: cout << "Meow!"<< std::endl;
}
Cat::Cat(const Cat & o) :Animal(o)
{    
    if(&o != this)
        *this = o;
    std:: cout << "Cat copy constructor "<< std::endl;
}