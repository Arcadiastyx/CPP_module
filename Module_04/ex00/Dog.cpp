/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inaranjo <inaranjo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 12:41:59 by inaranjo          #+#    #+#             */
/*   Updated: 2024/01/23 16:39:42 by inaranjo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
    std::cout  << ORANGE << "<Dog>"  << RESET << std::endl;
    std::cout << "[Default Constructor called] " << std::endl; 
}

Dog::Dog(const Dog &copy)
{
    std::cout  << ORANGE << "<Dog>"  << RESET << std::endl;
    std::cout << "[copy Constructor called]" << std::endl;
    *this = copy;
}

Dog::~Dog()
{
    std::cout  << ORANGE << "<Dog>"  << RESET << std::endl;
    std::cout << "[Destructor called]" << std::endl;   
}

void Dog::makeSound()const
{
    std::cout  << ORANGE << _type << RESET <<  " say :"  << RED << " Wouaf" << RESET << std::endl;
}
