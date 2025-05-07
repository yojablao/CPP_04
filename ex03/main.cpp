/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yojablao <yojablao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 02:31:13 by yojablao          #+#    #+#             */
/*   Updated: 2025/05/07 02:31:14 by yojablao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"
#include <iostream>

void subjecttest()
{
    std::cout << "\n===== subject Testing  =====" << std::endl;
        IMateriaSource* src = new MateriaSource();
        src->learnMateria(new Ice());
        src->learnMateria(new Cure());
        ICharacter* me = new Character("me");
        AMateria* tmp;
        tmp = src->createMateria("ice");
        me->equip(tmp);
        tmp = src->createMateria("cure");
        me->equip(tmp);
        ICharacter* bob = new Character("bob");
        me->use(0, *bob);
        me->use(1, *bob);
        delete bob;
        delete me;
        delete src;
}
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
    subjecttest();
    return 0;
}