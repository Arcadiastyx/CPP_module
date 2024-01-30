/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inaranjo <inaranjo <inaranjo@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 16:29:44 by inaranjo          #+#    #+#             */
/*   Updated: 2024/01/30 16:31:16 by inaranjo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern() {}

Intern::Intern( const Intern& src )
{
    *this = src;
}

Intern::~Intern() {}

Intern& Intern::operator=( const Intern& rhs ) 
{
    ( void ) rhs;
    return (*this);
}

AForm*   Intern::makeForm( std::string name, std::string target )
{

    std::string formNames[] = 
    {
        "robotomy request",
        "presidential pardon",
        "shrubbery creation"
    };

    AForm*    forms[] = 
    {
        new RobotomyRequestForm( target ),
        new PresidentialPardonForm( target ),
        new ShrubberyCreationForm( target )
    };
    
    for ( int i(0); i < 3; i++ ) {
        if ( name == formNames[i] ) {
            std::cout << "Intern creates " << name << std::endl;
            return forms[i];
        }
    }
    std::cout << "Intern cannot create " << name << " AForm" << std::endl;
    return nullptr;
}