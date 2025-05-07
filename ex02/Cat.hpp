/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yojablao <yojablao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 02:30:22 by yojablao          #+#    #+#             */
/*   Updated: 2025/05/07 02:43:45 by yojablao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP


#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal
{
    private:
        Brain *brain;
    public:
        Cat();
        Cat(const  Cat &o);
        ~Cat();
        void makeSound()const ;
        Cat &operator=(const  Cat &o);
        Brain* Mybrain() const ;
};

#endif