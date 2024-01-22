/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inaranjo <inaranjo <inaranjo@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 14:18:29 by inaranjo          #+#    #+#             */
/*   Updated: 2024/01/22 15:26:03 by inaranjo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(100), _energyPoints(50), _attackDamage(20)
{
    std::cout << BLUE << "<ClapTrap>" << RESET<< std::endl;
    std::cout << "Character name : " << GREEN << _name << RESET << " [has been created]" << std::endl;
    std::cout << "♥ Lifepoint : " << _hitPoints << " | " << "⚡EnergyPoints : " << _energyPoints << std::endl;
    std::cout << std::endl;

       
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
    *this = copy;
}

ClapTrap::~ClapTrap()
{
    std::cout << BLUE << "<ClapTrap>" << RESET<< std::endl;
    std::cout << GREEN << _name << RESET <<"[Leave the Battlefield]" << std::endl;
}

ClapTrap & ClapTrap::operator=(const ClapTrap &rhs)
{
    this->_name = rhs._name;
    this->_hitPoints = rhs._hitPoints;
    this->_energyPoints = rhs._energyPoints;
    this->_attackDamage = rhs._attackDamage;
    return *this;
}

void    ClapTrap::attack( std::string const& target )
{
    std::cout << VIOLET << target << RESET << " :[appears on the battlefield]" << std::endl;
    
    if (_energyPoints <= 0)
    {
        std::cout <<BLUE<< "ClapTrap> " <<RESET<< _name << " is out of energy!" << std::endl;
        return;
    }
    std::cout <<BLUE<< "ClapTrap> " <<RESET<< GREEN << _name << RESET <<" attacks " << VIOLET << target << RESET <<", causing " << RED <<_attackDamage << RESET <<" points of damage!" << std::endl;
    _energyPoints -= 1;
    std::cout << "EnergyPoint after Attack : " << YELLOW << _energyPoints << RESET <<std::endl;
}

void    ClapTrap::takeDamage( unsigned int amount )
{
    if (_hitPoints <= amount)
    {
        std::cout << "ClapTrap " << _name <<  " is dead!" << std::endl;
    }
    std::cout << "ClapTrap " << GREEN << _name << RESET <<" takes " << RED << amount << RESET << " damage!" << std::endl;
    _hitPoints -= amount;

    
}

void    ClapTrap::beRepaired( unsigned int amount )
{
    if (_energyPoints <= amount)
    {
        std::cout << "ClapTrap " << _name << " is out of energy!" << std::endl;
        return;
    }
    std::cout << BLUE <<"ClapTrap " << RESET<< GREEN << _name << RESET <<" repairs itself for " << RED << amount << RESET << " hit points!" << std::endl;
    _energyPoints -= 1;
    _hitPoints += amount;
    
    std::cout << "LifePoints after repair : " << YELLOW << _hitPoints << RESET <<std::endl;
    std::cout << "EnergyPoint after repair : " << YELLOW << _energyPoints << RESET <<std::endl;
}

unsigned int ClapTrap::getHealth()
{
    return this->_hitPoints;
}

unsigned int ClapTrap::getEneryPoints()
{
    return  this->_energyPoints;
}