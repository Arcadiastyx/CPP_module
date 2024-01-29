/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inaranjo <inaranjo <inaranjo@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 10:15:29 by inaranjo          #+#    #+#             */
/*   Updated: 2024/01/29 10:21:46 by inaranjo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"


Bureaucrat::Bureaucrat()
{
    std::cout << "[Constructor Called]" << std::endl;
}


Bureaucrat::Bureaucrat(const Bureaucrat &cpy)
{
    std::cout << "[Contructor Copy Called]" << std::endl;
    *this = cpy;
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "[Destructor Called]" << std::endl;
}

Bureaucrat & Bureaucrat::operator=(const Bureaucrat &rhs)
{
    std::cout << "[Operator Assignation Called]" << std::endl;

    if(this != &rhs)
    {
        
    }
    return *this;

}