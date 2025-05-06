#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
    Brain *brain;
    public:
        Cat();
        Cat(const  Cat &o);
        ~Cat();
        void makeSound()const ;
        Cat &operator=(const  Cat &o);
        Brain* Mybrain() const ;
};

#endif