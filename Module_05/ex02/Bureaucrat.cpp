/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inaranjo <inaranjo <inaranjo@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 10:37:57 by inaranjo          #+#    #+#             */
/*   Updated: 2024/01/30 15:08:35 by inaranjo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"

Bureaucrat::Bureaucrat(const std::string name, int grade) : _name(name), _grade(grade)
{
    std::cout << GREEN << name << RESET <<" [Has been hired with the grade]> " << YELLOW << grade << RESET <<std::endl;
    if(_grade < 1)
        throw GradeTooHighException(); 
    else if (_grade > 150)
        throw   GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat& cpy) : _name(cpy._name), _grade(cpy._grade)
{
    std::cout << VIOLET << "[Bureaucrat Has Been Duplicated]" << RESET <<std::endl;
    std::cout << VIOLET << _name << RESET <<" [Has Been Hired With The Grade]> " << YELLOW << _grade << RESET <<std::endl;

}

Bureaucrat::~Bureaucrat()
{
    std::cout << GREEN << _name << RESET << " [Has Been Fired]" << std::endl;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& rhs)
{
    std::cout << LIGHT_CYAN << "[Bureaucrat Operator Called]" << RESET <<std::endl;
    if(this != &rhs)
    {
        _grade = rhs._grade;
    }
    return (*this);
}

std::string Bureaucrat::getName() const {return _name;}

int Bureaucrat::getGrade() const {return _grade;}

void    Bureaucrat::upGrade()
{
    std::cout << GREEN << _name << RESET <<" [Hase Been Promoted]" << std::endl;
    if(_grade <= 1)
        throw GradeTooHighException ();
    _grade--;
}

void    Bureaucrat::downGrade()
{
     std::cout << GREEN << _name << RESET <<" [Hase Been Demoted]" << std::endl;
    if(_grade >= 150)
        throw GradeTooLowException ();
    _grade++;
}

void    Bureaucrat::signForm( AForm& form )
{
    try 
    {
        form.beSigned( *this );
        std::cout << *this << " signed " << form.getName() << std::endl;
    } 
    catch ( AForm::GradeTooLowException& e ) 
    {
        std::cout << _name << " coulnd't sign " << form.getName() << " because " << e.what() << std::endl;
    }
}

void    Bureaucrat::executeForm( const AForm& form ) const
{
    try 
    {
        form.execute( *this );
    } 
    catch ( std::exception& e ) 
    {
        std::cout << _name << " couldn't execute " << form.getName() << " because " << e.what() << std::endl;
    }
}

std::ostream& operator<<(std::ostream& o, const Bureaucrat& src)
{
    o << GREEN << src.getName() << RESET <<" [Current Grade]> " << YELLOW  <<src.getGrade() << RESET;
    return o;
}