#include <iostream>
#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main() {
    std::cout << "Creating a Dog and a Cat using abstract base class pointers:\n";

    const AAnimal* dog = new Dog();
    const AAnimal* cat = new Cat();

    std::cout << "\nDog makes sound: ";
    dog->makeSound();

    std::cout << "Cat makes sound: ";
    cat->makeSound();

    std::cout << "\nDeleting Dog and Cat:\n";
    delete dog;
    delete cat;

    std::cout << "\nTesting deep copy of Brain:\n";
    Cat basicDog;
    basicDog.getBrain()->setIdea(0, "I'm hungry");
    basicDog.getBrain()->setIdea(1, "I want to play");

    Cat copyDog(basicDog);  // Calls deep copy constructor
    copyDog.getBrain()->setIdea(1, "I changed my mind");

    std::cout << "Original Dog Brain Idea 1: " << basicDog.getBrain()->getIdea(1) << std::endl;
    std::cout << "Copied Dog Brain Idea 1: " << copyDog.getBrain()->getIdea(1) << std::endl;

    std::cout << "\nCreating an array of 4 AAnimal* with alternating Dog and Cat:\n";

    AAnimal* animals[4];
    for (int i = 0; i < 4; i++) {
        if (i % 2 == 0)
            animals[i] = new Dog();
        else
            animals[i] = new Cat();
    }

    std::cout << "\nMaking sounds:\n";
    for (int i = 0; i < 4; i++) {
        animals[i]->makeSound();
    }
    // Cat ;

    std::cout << "\nCleaning up array:\n";
    for (int i = 0; i < 4; i++) {
        delete animals[i];
    }

    return 0;
}
