/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yojablao <yojablao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 02:17:31 by yojablao          #+#    #+#             */
/*   Updated: 2025/05/07 02:17:32 by yojablao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    std:: cout << "WrongCat default constructor" << std::endl;
    this -> type = "WrongCat";
}
WrongCat::~WrongCat()
{
    std:: cout << "WrongCat destructor" << std::endl;
}
WrongCat &WrongCat::operator=(const WrongCat&o)
{
    std:: cout << "WrongCat copy assignment "<< std::endl;
    if(this != &o)
        this->type = o.type;
    return (*this);
}

void WrongCat::makeSound() const
{
    std:: cout << "Meow!"<< std::endl;
}
WrongCat::WrongCat(const WrongCat & o):WrongAnimal(o)
{
    if(this != &o)
        *this = o;
    std:: cout << "WrongCat copy constructor "<< std::endl;
}