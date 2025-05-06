#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"
#include <iostream>

void testCharacter() {
    std::cout << "\n===== Testing Character =====" << std::endl;

    AMateria* cure = new Cure();
    AMateria* ice = new Ice();


    Character alice("Alice");
    Character bob("Bob");


    alice.equip(cure);
    alice.equip(ice);
    bob.equip(ice->clone());


    alice.use(0, bob);  
    bob.use(0, alice); 


    Character copy(alice);
    copy.use(1, bob);  
    Character assigned("Assigned");
    assigned = alice;
    assigned.use(0, bob); 

    alice.unequip(0); 
    delete cure;       
    AMateria* anotherIce = new Ice();
    alice.equip(anotherIce);
    alice.equip(anotherIce); 
    alice.use(2, bob);       
}

void testMateriaSource() {
    std::cout << "\n===== Testing MateriaSource =====" << std::endl;

    MateriaSource source;
    source.learnMateria(new Cure());
    source.learnMateria(new Ice());

    AMateria* cured = source.createMateria("cure");
    AMateria* iced = source.createMateria("ice");
    AMateria* unknown = source.createMateria("Fire");

    Character dummy("Dummy");
    if (cured) {
        dummy.equip(cured);
        dummy.use(0, dummy); 
    }
    if (iced) {
        dummy.equip(iced);
        dummy.use(1, dummy);
        // std::cout << "Failed to create unknown materia." << std::endl;
    }
    if (!unknown) {
        std::cout << "Failed to create unknown materia." << std::endl;
    }

    delete cured;
    delete iced;
}

int main() {
    testCharacter();
    testMateriaSource();

    // Check for leaks with valgrind:
    // valgrind --leak-check=full ./a.out
    return 0;
}