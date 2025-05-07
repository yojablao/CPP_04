/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yojablao <yojablao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 02:30:41 by yojablao          #+#    #+#             */
/*   Updated: 2025/05/07 02:30:42 by yojablao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

#include <string>
class ICharacter;
class AMateria 
{
protected:
    std::string type;

public:
    AMateria(std::string const &type);
    AMateria(const AMateria &type);
    virtual ~AMateria() {}
    virtual AMateria &operator=(const AMateria &o);
    std::string const & getType() const;

    virtual AMateria* clone() const = 0;

    virtual void use(ICharacter& target);
};
#endif