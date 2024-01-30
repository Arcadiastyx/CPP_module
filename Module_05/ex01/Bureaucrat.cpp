/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inaranjo <inaranjo <inaranjo@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 10:15:29 by inaranjo          #+#    #+#             */
/*   Updated: 2024/01/30 10:14:31 by inaranjo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"



Bureaucrat::Bureaucrat()
{
    std::cout << "[Constructor Called]" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string &name, int grade) : _name(name), _grade(grade)
{
    std::cout << "[ Initialise Constructor Called]" << std::endl;
    if(grade < 1)
        throw Bureaucrat::GradeTooHighException();
    else if(grade > 150)
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

void    Bureaucrat::UpGrade()
{
    if ( _grade <= 1 )
        throw Bureaucrat::GradeTooHighException();
    _grade--;
}

void    Bureaucrat::DownGrade()
{
    if ( _grade >= 150 )
        throw Bureaucrat::GradeTooLowException();
    _grade++;
}

void    Bureaucrat::signForm( Form& form )
{
    try
    {
        form.beSigned(*this);
        std::cout << "[The bureaucrat" << " signed] " << form.getName() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << "[The bureaucrat" << " cannot sign] " << form.getName() << " because " << e.what() << std::endl;
    }
}

std::ostream& operator<<( std::ostream& o, const Bureaucrat& rhs )
{
    o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade();
    return o;
}