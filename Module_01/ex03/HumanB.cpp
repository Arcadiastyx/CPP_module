/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inaranjo <inaranjo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 14:59:57 by inaranjo          #+#    #+#             */
/*   Updated: 2024/01/11 15:33:08 by inaranjo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

/*Construc*/
HumanB::HumanB(std::string name): _name(name)
{
    this->_weapon = NULL;
}

/*Destruct*/
HumanB::~HumanB(){}

void HumanB::setWeapon(Weapon&  weapon)
{
    this->_weapon = &weapon;
}

void    HumanB::attack(void)
{
    if(_weapon != NULL && _weapon->getType() != "")
       std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
    else 
        std::cout << _name << " doesn't have a weapon to attack." << std::endl;
    
}



