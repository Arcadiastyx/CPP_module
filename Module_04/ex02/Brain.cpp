/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inaranjo <inaranjo <inaranjo@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 11:07:17 by inaranjo          #+#    #+#             */
/*   Updated: 2024/01/25 19:45:21 by inaranjo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << YELLOW << "Brain" << RESET << "[Constructed]" << std::endl;
}

Brain::Brain(std::string type)
{
    std::cout << YELLOW << "<Brain> " << RESET  << "[Constructed for a :] " << ORANGE << type << RESET << std::endl;
    
    for(int i = 0; i < 100; i++)
    {
        _ideas[i] = "idea";
    }
}

Brain::Brain(const Brain &copy)
{
   std::cout  << YELLOW<< "<Brain> " << RESET  << "[has been copy]" << std::endl;
    *this = copy;
}

Brain::~Brain()
{   
    std::cout  << YELLOW << "<Brain> " << RESET  << " [has been Destructed]" << std::endl;
}

Brain & Brain::operator=(const Brain &rhs)
{
    std::cout  << YELLOW << "<Brain> " << RESET  << "[Surcharged operator = called]" << std::endl;
    if(this != &rhs)
    {
        for(int i = 0; i < 100; i++)
            _ideas[i] = rhs._ideas[i];
    }
    return *this;
        
}

std::string Brain::getIdea(int index) const
{
    if (index >= 0 && index < 100)
    {
        return _ideas[index];
    }
    return ""; // Retourne une chaîne vide si l'index est invalide
}

void Brain::makeSound()const
{
    std::cout  << YELLOW << _type << RESET <<  " say :"  << RED << " Brain" << RESET << std::endl;
}