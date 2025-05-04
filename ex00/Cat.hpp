#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
    public:
        Cat();
        Cat(const  Cat &o);
        ~Cat();
        Cat &operator=(const  Cat &o);
        void makeSound()const ;
};

#endif