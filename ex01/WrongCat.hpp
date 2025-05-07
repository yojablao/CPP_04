/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yojablao <yojablao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 02:24:23 by yojablao          #+#    #+#             */
/*   Updated: 2025/05/07 02:24:24 by yojablao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WORONGCAT_HPP
#define WORONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
    public:
        WrongCat();
        WrongCat(const  WrongCat &o);
        ~WrongCat();
        WrongCat &operator=(const  WrongCat &o);
        void makeSound()const ;
};

#endif

