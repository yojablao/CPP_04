#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"
#include <iostream>

void testCharacter() {
    std::cout << "\n===== Testing Character =====" << std::endl;

    // Create materias
    AMateria* cure = new Cure();
    AMateria* ice = new Ice();

    // Create characters
    Character alice("Alice");
    Character bob("Bob");

    // Equip materias
    alice.equip(cure);
    alice.equip(ice);
    bob.equip(ice->clone());

    // Use materias
    alice.use(0, bob);  // Alice heals Bob
    bob.use(0, alice);  // Bob shoots ice at Alice

    // Test copy constructor (deep copy)
    Character copy(alice);
    copy.use(1, bob);   // Copy shoots ice at Bob

    // Test assignment operator (deep copy)
    Character assigned("Assigned");
    assigned = alice;
    assigned.use(0, bob); // Assigned heals Bob

    alice.unequip(0);   // Alice drops cure (memory leak if not handled)
    delete cure;       

    // Equip same materia twice (should not duplicate)
    AMateria* anotherIce = new Ice();
    alice.equip(anotherIce);
    alice.equip(anotherIce); // Should ignore duplicate
    alice.use(2, bob);       // Uses anotherIce
}

void testMateriaSource() {
    std::cout << "\n===== Testing MateriaSource =====" << std::endl;

    MateriaSource source;
    source.learnMateria(new Cure());
    source.learnMateria(new Ice());

    AMateria* cured = source.createMateria("Cure");
    AMateria* iced = source.createMateria("Ice");
    AMateria* unknown = source.createMateria("Fire"); // Should return nullptr

    Character dummy("Dummy");
    if (cured) {
        dummy.equip(cured);
        dummy.use(0, dummy); // Heals self
    }
    if (iced) {
        dummy.equip(iced);
        dummy.use(1, dummy); // Shoots ice at self
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