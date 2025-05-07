/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yojablao <yojablao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 02:30:19 by yojablao          #+#    #+#             */
/*   Updated: 2025/05/07 02:43:52 by yojablao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP


#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal
{
    private:
        Brain * brain;
    public:
        Dog();
        Dog(const  Dog &o);
        ~Dog();
        Dog &operator=(const  Dog &o);
        void makeSound()const;
        Brain* getBrain() const ;
};

#endif