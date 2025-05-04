#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
    public:
    Dog();
    Dog(const  Dog &o);
    ~Dog();
    Dog &operator=(const  Dog &o);
    void makeSound()const;
};

#endif