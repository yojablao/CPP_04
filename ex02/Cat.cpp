#include "Cat.hpp"

Cat::Cat()
{
    this -> type = "Cat";
    std:: cout << "Cat default constructor" << std::endl;
    brain = new Brain;
}
Cat::~Cat()
{
    delete this->brain;
    std:: cout << "Cat destructor" << std::endl;
}
Cat &Cat::operator=(const Cat&o)
{
    std:: cout << "Cat copy assignment "<< std::endl;
     if (this != &o) 
    {
        this->brain = new Brain(*o.brain);
        std:: cout << "Cat copy assignment"<< std::endl;
    }
    return (*this);
}

void Cat::makeSound() const
{
    std:: cout << "Meow!"<< std::endl;
}
Cat::Cat(const Cat & o):AAnimal(o)
{    
    if(&o != this)
        *this = o;
    std:: cout << "Cat copy constructor "<< std::endl;
}
Brain* Cat::Mybrain() const {
    return brain;
}