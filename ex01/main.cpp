/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yojablao <yojablao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 02:26:35 by yojablao          #+#    #+#             */
/*   Updated: 2025/05/07 02:26:36 by yojablao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Brain.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int	main(void) 
{
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    delete j;
    delete i;
    {
        std::cout << "deep copy test" << std::endl;
        Brain original;
        original.setIdea(0, "Original Idea");
        Brain copy = original;
        copy.setIdea(0, "Modified Copy");
        std::cout << "Original: " << original.getIdea(0) << std::endl;
        std::cout << "Copy: " << copy.getIdea(0) << std::endl;   
    }
    {
        std::cout << "deep copy test" << std::endl;
        Animal **animals = new Animal*[10];
        for (size_t i = 0; i < 10; i++)
        {
            if(i % 2)
                animals[i] = new Dog;
            else
                animals[i] = new Cat;
        }
        for (size_t i = 0; i < 10; i++){
            delete animals[i];
        }
        delete [] animals;

    }
    return 0;


}