/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inaranjo <inaranjo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 12:40:00 by inaranjo          #+#    #+#             */
/*   Updated: 2024/01/23 16:39:47 by inaranjo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
    std::cout << LIGHT_CYAN << "<Cat>"  << RESET << std::endl;
    std::cout << "[Default Constructor called] " << std::endl; 
}

Cat::Cat(const Cat &copy)
{
    std::cout << LIGHT_CYAN << "<Cat>"  << RESET << std::endl;
    std::cout << "[copy Constructor called]" << std::endl;
    *this = copy;
}

Cat::~Cat()
{
    std::cout  << LIGHT_CYAN << "<Cat>"  << RESET << std::endl;
    std::cout << "[Destructor called]" << std::endl;   
}

Cat &Cat::operator=(const Cat &rhs)
{
    std::cout << YELLOW << "[Animal assignment operator called]" << RESET << std::endl;
    this->_type = rhs._type;
    return *this;
}

void Cat::makeSound()const
{
    std::cout  << LIGHT_CYAN << _type << RESET <<  " say :"  << RED << " Miaou" << RESET << std::endl;
}
