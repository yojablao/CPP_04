/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yojablao <yojablao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 02:17:26 by yojablao          #+#    #+#             */
/*   Updated: 2025/05/07 02:17:27 by yojablao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WORONGANIMAL_HPP
#define WORONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
    protected:
        std::string type;
    public:
        WrongAnimal();
        WrongAnimal(const  WrongAnimal &o);
         ~WrongAnimal();
        WrongAnimal &operator=(const  WrongAnimal &o);
        void makeSound() const;
        std::string getType() const ;
};
#endif