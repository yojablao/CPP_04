/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yojablao <yojablao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 02:25:50 by yojablao          #+#    #+#             */
/*   Updated: 2025/05/07 02:25:51 by yojablao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    std:: cout << "Dog default constructor" << std::endl;
    this -> type = "Dog";
    brain = new Brain;
}
Dog::~Dog()
{
    delete brain;
    std:: cout << "Dog destructor" << std::endl;
}
Dog &Dog::operator=(const Dog&o)
{
    std:: cout << "Dog copy assignment "<< std::endl;
    if (this != &o)
    {
        this->type = o.type;
        delete this->brain;
        this->brain = o.brain;
    }
    return (*this);
}

void Dog::makeSound() const
{
    std:: cout << "Woof! Woof!"<< std::endl;
}
Dog::Dog(const Dog & o):Animal(o)
{    
    std:: cout << "Dog copy constructor "<< std::endl;
    this->brain = NULL;
    if(&o != this)
        *this = o;
}