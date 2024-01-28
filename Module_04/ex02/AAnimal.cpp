/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inaranjo <inaranjo <inaranjo@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 12:37:15 by inaranjo          #+#    #+#             */
/*   Updated: 2024/01/25 18:14:32 by inaranjo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal() : _type("AAnimal") 
{
    std::cout << GREEN << "<AAnimal> " << RESET << "[has been Constructed]" << std::endl;
}

AAnimal::AAnimal(std::string type) : _type(type)
{
    std::cout << GREEN << "<AAnimal> " << RESET << "[type has been constructed]" << std::endl;
}

AAnimal::AAnimal(const AAnimal &copy)
{
    std::cout << GREEN << "<AAnimal> " << RESET << "[has been copy]" << std::endl;
    *this = copy;
}

AAnimal::~AAnimal()
{
    std::cout << GREEN << "<AAnimal> " << RESET << "[has been Killed]" << std::endl;
}

AAnimal &AAnimal::operator=(const AAnimal &rhs)
{
    std::cout << GREEN << "<AAnimal> " << RESET << "[surcharged operator = called]" << std::endl;
    if (this != &rhs)
        this->_type = rhs._type;
    return *this;
}

std::string AAnimal::getType() const
{
    return this->_type;
}

void AAnimal::makeSound(void) const
{
    std::cout << GREEN << _type << RESET << " say :" << RED << " a random sound" << RESET << std::endl;
}

void AAnimal::printIdeas() const
{
    std::cout << "AAnimals have no ideas" << std::endl;
}
