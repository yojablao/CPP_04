/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yojablao <yojablao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 02:26:47 by yojablao          #+#    #+#             */
/*   Updated: 2025/05/07 02:26:48 by yojablao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <iostream>

class AAnimal
{
    protected:
        std::string type;
    public:
        AAnimal();
        AAnimal(const  AAnimal &o);
        virtual ~AAnimal();
        AAnimal &operator=(const  AAnimal &o);
        virtual void makeSound() const = 0;
        
        std::string getType() const ;
};
#endif