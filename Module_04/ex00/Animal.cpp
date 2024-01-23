/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inaranjo <inaranjo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 12:37:15 by inaranjo          #+#    #+#             */
/*   Updated: 2024/01/23 16:45:28 by inaranjo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(): _type("Animal")
{
    std::cout  << GREEN << "<Animal>"  << RESET << std::endl;
    std::cout << "[Default Constructor called]" << std::endl; 
}

Animal::Animal(std::string type) : _type(type)
{
    std::cout  << GREEN << "<Animal>"  << RESET << std::endl;
    std::cout << "[Constructor parameter called] " << std::endl; 
    std::cout << "[Animal type constructed] : " << _type << std::endl;
}

Animal::Animal(const Animal &copy)
{
    std::cout << GREEN<< "<Animal>"  << RESET << std::endl;
    std::cout << "copy Constructor called" << std::endl;
    *this = copy;
}

Animal::~Animal()
{
    std::cout  << GREEN << "<Animal>" << RESET << std::endl;
    std::cout << "[Destructor Called]" << std::endl;
}

Animal &Animal::operator=(const Animal &rhs)
{
    std::cout << YELLOW << "[Animal assignment operator called]" << RESET << std::endl;
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
    std::cout  << ORANGE << _type << RESET <<  " say :"  << RED << " a random sound" << RESET << std::endl;
}







