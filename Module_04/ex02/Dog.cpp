/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inaranjo <inaranjo <inaranjo@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 12:41:59 by inaranjo          #+#    #+#             */
/*   Updated: 2024/01/25 19:29:58 by inaranjo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : AAnimal("Dog"), _dogBrain(new Brain("Dog"))
{
    std::cout  << ORANGE << "<Dog> "  << RESET  << "[has been constructed]" << std::endl;
}

Dog::Dog(const Dog &copy)
{
    std::cout  << ORANGE << "<Dog> "  << RESET  << "[has been copy]" << std::endl;
    *this = copy;
}

Dog::~Dog()
{
    std::cout  << ORANGE << "<Dog> "  << RESET  << "[has been Killed]" << std::endl;
    delete _dogBrain;  
}

Dog & Dog::operator=(const Dog &rhs)
{
    std::cout  << YELLOW << "<Dog> " << RESET  << "[Surcharged operator = called]" << std::endl;
    if(this != &rhs)
    {
        _type = rhs._type;
        _dogBrain = new Brain( *rhs._dogBrain);
    }
    return *this;
}

void Dog::makeSound()const
{
    std::cout  << ORANGE << _type << RESET <<  " say :"  << RED << " Wouaf" << RESET << std::endl;
}

void Dog::printIdeas() const
{
    if (_dogBrain) // Vérifiez que _dogBrain n'est pas un pointeur nul
    { 
        std::cout << YELLOW << "[Dog's Brain Ideas] " << RESET << std::endl;
        for (int i = 0; i < 100; i++)
        {
            std::cout << "Idea " << i + 1 << ": " << _dogBrain->getIdea(i) << std::endl;
        }
    }
    else 
    {
        std::cout << "Dog's brain is not initialized." << std::endl;
    }
}
