/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inaranjo <inaranjo <inaranjo@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 10:15:29 by inaranjo          #+#    #+#             */
/*   Updated: 2024/01/29 11:04:24 by inaranjo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"


Bureaucrat::Bureaucrat()
{
    std::cout << "[Constructor Called]" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string &name, int grade) : _name(name), _grade(grade)
{
    std::cout << "[Constructor Parameter Called]" << std::endl;
    if(grade < 1)
        throw Bureaucrat::GradeTooHighException();
    if(grade > 150)
        throw Bureaucrat::GradeTooLowException();

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
        _grade = rhs._grade;
    }
    return *this;

}

std::string Bureaucrat::getName()const
{
    return (this->_name);
}

int     Bureaucrat::getGrade() const
{
    return (this->_grade);
}

void    Bureaucrat::incrementGrade() 
{
    if ( _grade - 1 < 1 )
        throw Bureaucrat::GradeTooHighException();
    _grade--;
}

void    Bureaucrat::decrementGrade()
{
    if ( _grade + 1 > 150 )
        throw Bureaucrat::GradeTooLowException();
    _grade++;
}

std::ostream& operator<<( std::ostream& o, const Bureaucrat& rhs )
{
    o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade();
    return o;
}