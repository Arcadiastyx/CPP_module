/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inaranjo <inaranjo <inaranjo@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 12:40:00 by inaranjo          #+#    #+#             */
/*   Updated: 2024/01/25 19:44:16 by inaranjo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : AAnimal("Cat"), _catBrain(new Brain("Cat"))
{
    std::cout  << ORANGE << "<Cat> "  << RESET  << "[has been constructed]" << std::endl;
}

Cat::Cat(const Cat &copy)
{
    std::cout  << ORANGE << "<Cat> "  << RESET  << "[has been copy]" << std::endl;
    *this = copy;
}

Cat::~Cat()
{
    std::cout  << ORANGE << "<Cat> "  << RESET  << "[has been Killed]" << std::endl;
    delete _catBrain;
}

Cat &Cat::operator=(const Cat &rhs)
{
    std::cout << YELLOW << "[Cat assignment operator called]" << RESET << std::endl;
    this->_type = rhs._type;
    this->_catBrain =  new Brain( *rhs._catBrain );
    return *this;
}

void Cat::makeSound()const
{
    std::cout  << LIGHT_CYAN << _type << RESET <<  " say :"  << RED << " Miaou" << RESET << std::endl;
}

void Cat::printIdeas() const
{
    if (_catBrain) // Vérifiez que _catBrain n'est pas un pointeur nul
    { 
        std::cout << YELLOW << "[Cat's Brain Ideas] " << RESET << std::endl;
        for (int i = 0; i < 100; i++)
            std::cout << "Idea " << i + 1 << ": " << _catBrain->getIdea(i) << std::endl;
    }
    else 
        std::cout << "Cat's brain is not initialized." << std::endl;
}
