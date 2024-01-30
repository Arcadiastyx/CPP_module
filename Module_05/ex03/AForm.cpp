/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inaranjo <inaranjo <inaranjo@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 12:39:00 by inaranjo          #+#    #+#             */
/*   Updated: 2024/01/30 14:59:42 by inaranjo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(const std::string name, int gradeToSign, int gradeToExec): _name(name), _gradeToSign(gradeToSign), _gradeToExec(gradeToExec)
{
    std::cout << "[Form name :]> " << ORANGE << name << RESET << " [Bureaucrat Grade Needed :]> " << YELLOW << gradeToSign << RESET << " [Grade to execute :]> " << RED <<gradeToExec << RESET << GREEN << " [CREATED]" << RESET <<std::endl;
   if ( gradeToSign < 1 || gradeToExec < 1 )
        throw AForm::GradeTooHighException();
    if ( gradeToSign > 150 || gradeToExec > 150 )
        throw AForm::GradeTooLowException();
    
}

AForm::AForm(const AForm& cpy) : _name(cpy._name), _gradeToSign(cpy._gradeToSign), _gradeToExec(cpy._gradeToExec)
{
    std::cout << LIGHT_BLUE << "[Form Duplicated]" << RESET <<std::endl;
    std::cout << "[Copy Form :]> " << ORANGE << _name << RESET << " [Bureaucrat Grade Needed :]> " << YELLOW << _gradeToSign << RESET << " [Grade to execute :]> " << RED << _gradeToExec << RESET << GREEN << " [CREATED]" << RESET <<std::endl;
}

AForm::~AForm()
{
    std::cout << ORANGE << _name << RESET <<" [Has Been Destroyed Succesfully]" << std::endl;
}

AForm& AForm::operator=(const AForm& src)
{
    std::cout << YELLOW << "[Operator called]>" << RESET << " Reatribtion of [GradeToSign] and [GradeToExec] " << "to : "  << ORANGE <<_name << RESET <<std::endl;
    if(this != &src)
    {
        _signed = src._signed;
        _gradeToSign = src._gradeToSign;
        _gradeToExec = src._gradeToExec;
    }
    return *this;
}

std::string AForm::getName() const {return _name;}

bool AForm::getSigned() const {return _signed;}

int AForm::getGradeToSign() const {return _gradeToSign;}

int AForm::getGradeToExc() const {return _gradeToExec;}

void    AForm::beSigned(const Bureaucrat& bureaucrat)
{
    if ( bureaucrat.getGrade() > _gradeToSign ) 
    {
        throw AForm::GradeTooLowException();
    }
    _signed = true;
}

std::ostream&   operator<<( std::ostream& o, const AForm& src )
{
    o << "[Operator surcharged << called]" << std::endl;
    o << "[Form name:] " << src.getName() << std::endl
      << "[Grade to sign:] " << src.getGradeToSign() << std::endl
      << "[Grade to execute:] " << src.getGradeToExc();
    return o;
}