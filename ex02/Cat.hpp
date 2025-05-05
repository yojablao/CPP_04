#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal
{
    private:
        Brain *brain;
    public:
        Cat();
        Cat(const  Cat &o);
        ~Cat();
        void makeSound()const ;
        Cat &operator=(const  Cat &o);
        Brain* getBrain() const ;
};

#endif