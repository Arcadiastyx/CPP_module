/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inaranjo <inaranjo <inaranjo@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 10:14:16 by inaranjo          #+#    #+#             */
/*   Updated: 2024/01/15 13:09:55 by inaranjo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl() 
{
    complaintFunctions[0] = &Harl::_debug;
    complaintFunctions[1] = &Harl::_info;
    complaintFunctions[2] = &Harl::_warning;
    complaintFunctions[3] = &Harl::_error;

    complaintLevels[0] = "DEBUG";
    complaintLevels[1] = "INFO";
    complaintLevels[2] = "WARNING";
    complaintLevels[3] = "ERROR";
}

Harl::~Harl()
{
    std::cout << "destructor has been call" << std::endl;
}

void Harl::_debug()
{
    std::cout << "DEBUG: I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void Harl::_info()
{
    std::cout << "INFO: I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::_warning() 
{
    std::cout << "WARNING: I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::_error() 
{
    std::cout << "ERROR: This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level)
{
    for (int i = 0; i < 4; i++) 
    {
        if (level == complaintLevels[i])
        {
            (this->*complaintFunctions[i])();
            return;
        }
    }
    std::cout << "Unknown complaint level: " << level << std::endl;
}