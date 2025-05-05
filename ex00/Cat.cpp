#include "Cat.hpp"

Cat::Cat()
{
    this -> type = "Cat";
    std:: cout << "Cat default constructor" << std::endl;
}
Cat::~Cat()
{
    std:: cout << "Cat destructor" << std::endl;
}
Cat &Cat::operator=(const Cat&o)
{
    this->type = o.type;
    std:: cout << "Cat copy assignment "<< std::endl;
    return (*this);
}

void Cat::makeSound() const
{
    std:: cout << "Meow!"<< std::endl;
}
Cat::Cat(const Cat & o):Animal(o)
{
    *this = o;
    std:: cout << "Cat copy constructor "<< std::endl;
}