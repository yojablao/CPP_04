/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yojablao <yojablao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 02:24:06 by yojablao          #+#    #+#             */
/*   Updated: 2025/05/07 02:27:57 by yojablao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP
#include <iostream>
class Brain
{
    private:
        std::string ideas[100];

    public:
        Brain();
        Brain(const Brain &o);
        Brain &operator=(const Brain &o);
        const std::string& getIdea(unsigned int i) const;
        void setIdea(int index, const std::string& idea);
        ~Brain();
};
#endif