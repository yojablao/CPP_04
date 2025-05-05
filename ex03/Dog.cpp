#include "Dog.hpp"

Dog::Dog()
{
    this -> type = "Dog";
    brain = new Brain;
    std:: cout << "Dog default constructor" << std::endl;
}
Dog::~Dog()
{
    delete brain;
    std:: cout << "Dog destructor" << std::endl;
}
Brain* Dog::getBrain() const {
    return brain;
}
Dog& Dog::operator=(const Dog& o)
{
    std::cout << "Dog copy assignment " << std::endl;
    if (this != &o)
    {
        this->type = o.type;
        // if (this->brain)  
            delete this->brain;
        this->brain = new Brain(*o.brain);
    }
    return *this;
}
void Dog::makeSound() const
{
    std:: cout << "Woof! Woof!"<< std::endl;
}
Dog::Dog(const Dog& o) : AAnimal(o)
{
    brain = new Brain(*o.brain);
    std::cout << "Dog copy constructor " << std::endl;
}