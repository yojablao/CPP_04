#ifndef WORONGANIMAL_HPP
#define WORONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
    protected:
        std::string type;
    public:
        WrongAnimal();
        WrongAnimal(const  WrongAnimal &o);
        virtual ~WrongAnimal();
        WrongAnimal &operator=(const  WrongAnimal &o);
        void makeSound() const;
        
        std::string getType() const ;
};
#endif