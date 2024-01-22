/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inaranjo <inaranjo <inaranjo@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 14:57:15 by inaranjo          #+#    #+#             */
/*   Updated: 2024/01/22 16:54:04 by inaranjo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    std::cout << LIGHT_BLUE<< "<ScavTrap>"<< RESET <<std::endl;
    std::cout << GREEN <<this->_name << RESET << "[has beed created]" << std::endl;

    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;

}

ScavTrap::ScavTrap(ScavTrap const & other) : ClapTrap(other)
{
    std::cout << LIGHT_BLUE<< "<ScavTrap>" << RESET << std::endl;
    std::cout << GREEN <<  _name << RESET << " [has been CLONED]" << std::endl;
    *this = other;
}

ScavTrap::~ScavTrap(void)
{
    std::cout << LIGHT_BLUE << "<ScavTrap>" << RESET <<std::endl;
    std::cout <<  GREEN <<this->_name << RESET << "[Leave the battefield]"<< std::endl;
}

ScavTrap & ScavTrap::operator=(ScavTrap const & rhs)
{
    std::cout << YELLOW<< "[ScavTrap assignation operator called]" << RESET <<std::endl;
    if (this != &rhs)
    {
        this->_name = rhs._name;
        this->_hitPoints = rhs._hitPoints;
        this->_energyPoints = rhs._energyPoints;
        this->_attackDamage = rhs._attackDamage;
    }
    return *this;
}

void ScavTrap::guardGate()
{
    std::cout << LIGHT_BLUE << "<ScavTrap> " << RESET<< std::endl;
    std::cout << GREEN << _name << RESET << " 🚪 [has entered in Gate keeper mode]" << std::endl;
}

void ScavTrap::attack(std::string const & target)
{
   std::cout << VIOLET << target << RESET << " :[appears on the battlefield]" << std::endl;
    
    if (_energyPoints <= 0)
    {
        std::cout << LIGHT_BLUE << "ScavTrap> " << RESET << _name << " is out of energy!" << std::endl;
        return;
    }
    std::cout << LIGHT_BLUE << "ScavTrap> "  << RESET << GREEN << _name << RESET <<" attacks " << VIOLET << target << RESET <<", causing " << RED <<_attackDamage << RESET <<" points of damage!" << std::endl;
    _energyPoints -= 1;
    std::cout << "EnergyPoint after Attack : " << YELLOW << _energyPoints << RESET <<std::endl;
}