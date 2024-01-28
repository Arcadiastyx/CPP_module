/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inaranjo <inaranjo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 17:32:59 by inaranjo          #+#    #+#             */
/*   Updated: 2024/01/23 18:06:16 by inaranjo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(): _type("WrongAnimal")
{
    std::cout  << VIOLET << "<WrongAnimal>"  << RESET << std::endl;
    std::cout << "[Default Constructor called]" << std::endl;
}

WrongAnimal::WrongAnimal( std::string type ) : _type( type )
{
    std::cout  << VIOLET << "<WrongAnimal>"  << RESET << std::endl;
    std::cout << " constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
    std::cout << VIOLET << "<WrongAnimal>" << RESET << std::endl;
    std::cout << "copy Constructor called" << std::endl;
    *this = copy;
}

WrongAnimal::~WrongAnimal()
{
    std::cout  << VIOLET << "<WrongAnimal>" << RESET << std::endl;
    std::cout << "[Destructor Called]" << std::endl;
}

WrongAnimal& WrongAnimal::operator=( const WrongAnimal& rhs )
{
    std::cout << YELLOW << "WrongAnimal assignment operator called" << YELLOW<<  std::endl;
    if ( this != &rhs ) {
        this->_type = rhs._type;
    }
    return *this;
}

void WrongAnimal::makeSound( void ) const
{
    std::cout << "WrongAnimal makeSound called" << std::endl;
}

std::string    WrongAnimal::getType( void ) const
{
    return this->_type;
}