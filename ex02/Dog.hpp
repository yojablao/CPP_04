#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal
{
    private:
        Brain * brain;
    public:
        Dog();
        Dog(const  Dog &o);
        ~Dog();
        Dog &operator=(const  Dog &o);
        void makeSound()const;
        Brain* getBrain() const ;
};

#endif