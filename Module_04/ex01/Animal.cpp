/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inaranjo <inaranjo <inaranjo@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 12:37:15 by inaranjo          #+#    #+#             */
/*   Updated: 2024/01/25 18:14:32 by inaranjo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(): _type("Animal")
{   
    std::cout  << GREEN << "<Animal> "  << RESET  << "[has been Constructed]" << std::endl;
}

Animal::Animal(std::string type) : _type(type)
{
    std::cout  << GREEN << "<Animal> "  << RESET  << "[type has been constructed]" << std::endl;
}

Animal::Animal(const Animal &copy)
{
    std::cout  << GREEN << "<Animal> "  << RESET  << "[has been copy]" << std::endl;
    *this = copy;
}

Animal::~Animal()
{
   std::cout  << GREEN<< "<Animal> "  << RESET  << "[has been Killed]" << std::endl;
}

Animal &Animal::operator=(const Animal &rhs)
{
     std::cout  << GREEN<< "<Animal> "  << RESET  << "[surcharged operator = called]" << std::endl;
    if(this != &rhs)
        this->_type = rhs._type;
    return *this;
}

std::string Animal::getType() const
{
    return this->_type;
}

void Animal::makeSound( void ) const
{
    std::cout  << GREEN<< _type << RESET <<  " say :"  << RED << " a random sound" << RESET << std::endl;
}

void Animal::printIdeas() const
{
    std::cout << "Animals have no ideas" << std::endl;
}




