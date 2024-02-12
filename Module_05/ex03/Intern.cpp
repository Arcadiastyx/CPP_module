/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inaranjo <inaranjo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 16:29:44 by inaranjo          #+#    #+#             */
/*   Updated: 2024/02/12 16:19:16 by inaranjo         ###   ########.fr       */
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
    
    AForm* createdForm = nullptr;

    for (int i(0); i < 3; i++)
    {
        if (name == formNames[i])
        {
            std::cout << "Intern creates " << name << std::endl;
            createdForm = forms[i];
        }
        else
            delete forms[i]; // Supprimer les formulaires non utilisés
    }
    if (createdForm == nullptr) 
        std::cout << "Intern cannot create " << name << " AForm" << std::endl;

    return createdForm;
}