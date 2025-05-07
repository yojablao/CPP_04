/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yojablao <yojablao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 02:25:47 by yojablao          #+#    #+#             */
/*   Updated: 2025/05/07 02:25:48 by yojablao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
    private:
        Brain * brain;
    public:
        Dog();
        Dog(const  Dog &o);
        ~Dog();
        Dog &operator=(const  Dog &o);
        void makeSound()const;
};

#endif