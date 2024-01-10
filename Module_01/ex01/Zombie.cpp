/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inaranjo <inaranjo <inaranjo@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 13:40:36 by inaranjo          #+#    #+#             */
/*   Updated: 2024/01/10 17:04:01 by inaranjo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(){}

Zombie::~Zombie()
{
    std::cout << this->_name << ":" << RED << " ...is dead" << RESET << std::endl;
}

void    Zombie::annouce( void )
{
    std::cout << this->_name << ":" << YELLOW << ": BraiiiiiiinnnzzzZ..." << RESET << std::endl;
}

void    Zombie::setName(std::string name)
{
    this->_name = name;
}
