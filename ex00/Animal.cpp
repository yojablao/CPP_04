/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yojablao <yojablao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 02:15:56 by yojablao          #+#    #+#             */
/*   Updated: 2025/05/07 02:15:57 by yojablao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    std:: cout << "Animal default constructor" << std::endl;
    this -> type = "Animal";
}
Animal::~Animal()
{
    std:: cout << "Animal destructor" << std::endl;
}
Animal &Animal::operator=(const Animal&o)
{
    std:: cout << "Animal copy assignment "<< std::endl;
    if(this != &o)
        this->type = o.type;
    return *this;
}


void Animal::makeSound() const
{
    std:: cout << "Animal Sound "<< std::endl;
}
Animal::Animal(const Animal & o)
{
    if(this != &o)
        *this = o;
    std:: cout << "Animal copy constructor "<< std::endl;
}
std::string Animal::getType()const {return(type);}