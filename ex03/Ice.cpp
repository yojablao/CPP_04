/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yojablao <yojablao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 02:30:55 by yojablao          #+#    #+#             */
/*   Updated: 2025/05/07 02:30:56 by yojablao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice():AMateria("ice")
{

}
Ice::Ice(const Ice &o):AMateria("ice")
{
    *this = o;

}
Ice::~Ice(){}
AMateria *Ice::clone() const
{
    return(new Ice(*this));
}
Ice &Ice::operator=(const Ice &o)
{

     if (this != &o) 
    {AMateria::operator=(o);}
    return (*this);
}
void Ice::use(ICharacter &target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *"<< std::endl;
}
