/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yojablao <yojablao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 02:30:38 by yojablao          #+#    #+#             */
/*   Updated: 2025/05/07 02:30:39 by yojablao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const & t) : type(t) {}
void AMateria::use(ICharacter& target){(void)target;}
std::string const &AMateria::getType() const { return type; }
AMateria& AMateria::operator=(const AMateria &o)
{
    if(this != &o)
        this->type =  o.type;
    return(*this);
}
AMateria::AMateria(const AMateria &o)
{
    *this  = o;
}