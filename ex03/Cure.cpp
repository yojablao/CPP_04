/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yojablao <yojablao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 02:30:50 by yojablao          #+#    #+#             */
/*   Updated: 2025/05/07 02:30:51 by yojablao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure():AMateria("cure")
{
}
Cure::Cure(const Cure &o):AMateria("cure")
{
    *this = o;
}
Cure::~Cure()
{
}
AMateria *Cure::clone() const
{
    return(new Cure(*this));
}
Cure &Cure::operator=(const Cure &o)
{
     if (this != &o) 
    {
        AMateria::operator=(o);
    }
    return (*this);
}
void Cure::use(ICharacter &target)
{
    std::cout << "* heals  " << target.getName() << "’s wounds *"<<std::endl;
}
