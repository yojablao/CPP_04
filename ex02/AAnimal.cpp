/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yojablao <yojablao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 02:26:52 by yojablao          #+#    #+#             */
/*   Updated: 2025/05/07 02:29:04 by yojablao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal()
{
    std:: cout << "AAnimal default constructor" << std::endl;
    this -> type = "AAnimal";
}
AAnimal::~AAnimal()
{
    std:: cout << "AAnimal destructor" << std::endl;
}
AAnimal &AAnimal::operator=(const AAnimal&o)
{
    std:: cout << "AAnimal copy assignment "<< std::endl;
    this->type = o.type;
    return *this;
}
AAnimal::AAnimal(const AAnimal & o)
{
    std:: cout << "AAnimal copy constructor "<< std::endl;
    if(this != &o)
        *this = o;
}
std::string AAnimal::getType() const
{return(type);}