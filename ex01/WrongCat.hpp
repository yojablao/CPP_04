#ifndef WORONGCAT_HPP
#define WORONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
    public:
        WrongCat();
        WrongCat(const  WrongCat &o);
        ~WrongCat();
        WrongCat &operator=(const  WrongCat &o);
        void makeSound()const ;
};

#endif

