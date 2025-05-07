/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yojablao <yojablao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 21:35:12 by yojablao          #+#    #+#             */
/*   Updated: 2025/05/07 02:43:02 by yojablao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Brain.hpp"

Brain::Brain()
{
    std:: cout << "Brain default constructor" << std::endl;
}
Brain::~Brain()
{
    std:: cout << "Brain destructor" << std::endl;
}
Brain &Brain::operator=(const Brain&o)
{
    std:: cout << "Brain copy assignment "<< std::endl;
    if(this != &o)
    {
        for(int i = 0;i < 100 ;i++)
        {
            this->ideas[i] = o.ideas[i];
        }
    }
    return (*this);
}

const std::string &Brain::getIdea(unsigned int i)const
{
    if (i < 0 || i >= 100 ) return this->ideas[0];
    return (this->ideas[i]);
}
void Brain::setIdea(int i, const std::string& idea)
{
    if (i < 0 || i >= 100 ) return;
    this->ideas[i] = idea;   
}
Brain::Brain(const Brain & o)
{
    *this = o;
    std:: cout << "Brain copy constructor "<< std::endl;
}