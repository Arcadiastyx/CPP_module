/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inaranjo <inaranjo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 17:37:41 by inaranjo          #+#    #+#             */
/*   Updated: 2024/01/23 18:10:20 by inaranjo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(): WrongAnimal("WrongCat")
{
    std::cout << MAGENTA << "<WrongCat>"  << RESET << std::endl;
    std::cout << "[Default Constructor called] " << std::endl; 
}

WrongCat::~WrongCat()
{
    std::cout  << MAGENTA << "<WrongCat>"  << RESET << std::endl;
    std::cout << "[Destructor called]" << std::endl;   
}

void    WrongCat::makeSound( void ) const
{
    std::cout << "Meow!" << std::endl;
}