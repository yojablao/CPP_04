/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yojablao <yojablao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 02:16:02 by yojablao          #+#    #+#             */
/*   Updated: 2025/05/07 02:16:03 by yojablao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    std:: cout << "Cat default constructor" << std::endl;
    this -> type = "Cat";
}
Cat::~Cat()
{
    std:: cout << "Cat destructor" << std::endl;
}
Cat &Cat::operator=(const Cat&o)
{
    std:: cout << "Cat copy assignment "<< std::endl;
    if (this != &o) 
        this->type = o.type;
    return (*this);
}

void Cat::makeSound() const
{
    std:: cout << "Meow!"<< std::endl;
}
Cat::Cat(const Cat & o):Animal(o)
{
    if (this != &o) 
        *this = o;
    std:: cout << "Cat copy constructor "<< std::endl;
}
