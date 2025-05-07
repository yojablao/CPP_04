/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yojablao <yojablao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 02:26:00 by yojablao          #+#    #+#             */
/*   Updated: 2025/05/07 02:28:35 by yojablao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    std:: cout << "Cat default constructor" << std::endl;
    this -> type = "Cat";
    brain = new Brain;
}
Cat::~Cat()
{
    std:: cout << "Cat destructor" << std::endl;
    delete this->brain;
}
Cat &Cat::operator=(const Cat&o)
{
    std:: cout << "Cat copy assignment "<< std::endl;
     if (this != &o) 
    {
        this -> type = "Cat";
        delete this->brain;
        this->brain = new Brain(*o.brain);
    }
    return (*this);
}

void Cat::makeSound() const
{
    std:: cout << "Meow!"<< std::endl;
}
Cat::Cat(const Cat & o):Animal(o)
{    
    std:: cout << "Cat copy constructor "<< std::endl;
    this->brain = NULL;
    if(&o != this)
        *this = o;
}
Brain* Cat::Mybrain() const {
    return brain;
}