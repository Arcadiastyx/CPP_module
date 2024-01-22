/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inaranjo <inaranjo <inaranjo@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 15:32:39 by inaranjo          #+#    #+#             */
/*   Updated: 2024/01/22 16:53:12 by inaranjo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    std::cout << LIGHT_ORANGE << "<FragTrap>"<< RESET <<std::endl;
    std::cout << GREEN <<this->_name << RESET << "[has beed created]" << std::endl;
    this->_hitPoints = 100;
    this->_energyPoints= 100;
    this->_attackDamage= 30;
}

FragTrap::FragTrap(FragTrap const & other) : ClapTrap(other)
{
    std::cout << LIGHT_ORANGE << "<FragTrap>" << RESET << std::endl;
    std::cout << GREEN <<  _name << RESET << " [has been CLONED]" << std::endl;
    *this = other;
}

FragTrap::~FragTrap(void)
{
    std::cout << LIGHT_ORANGE << "<FragTrap>" << RESET <<std::endl;
    std::cout <<  GREEN <<this->_name << RESET << "[Leave the battefield]"<< std::endl;
}

FragTrap & FragTrap::operator=(FragTrap const & rhs)
{
    std::cout << YELLOW<< "[FragTrap assignation operator called]" << RESET <<std::endl;
    if (this != &rhs)
    {
        this->_name = rhs._name;
        this->_hitPoints= rhs._hitPoints;
        this->_energyPoints= rhs._energyPoints;
        this->_attackDamage = rhs._attackDamage;
    }
    return *this;
}

void FragTrap::highFives(void)
{
    std::cout << LIGHT_ORANGE << "<FragTrap> " << RESET<< std::endl;
    std::cout << GREEN << _name << RESET << " 🖐️  [give you a high five]" << std::endl;
}

void FragTrap::attack(std::string const & target)
{
   std::cout << VIOLET << target << RESET << " :[appears on the battlefield]" << std::endl;
    
    if (_energyPoints <= 0)
    {
        std::cout << LIGHT_ORANGE<< "FragTrap> " << RESET << _name << " is out of energy!" << std::endl;
        return;
    }
    std::cout << LIGHT_ORANGE << "FragTrap> "  << RESET << GREEN << _name << RESET <<" attacks " << VIOLET << target << RESET <<", causing " << RED <<_attackDamage << RESET <<" points of damage!" << std::endl;
    _energyPoints -= 1;
    std::cout << "EnergyPoint after Attack : " << YELLOW << _energyPoints << RESET <<std::endl;
}