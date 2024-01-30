/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inaranjo <inaranjo <inaranjo@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 15:14:56 by inaranjo          #+#    #+#             */
/*   Updated: 2024/01/30 16:20:37 by inaranjo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm( const std::string& target ) : AForm( "ShrubberyCreationForm", 145, 137 ), _target( target ) {}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm& src ) : AForm( src ), _target( src._target ) {}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm& ShrubberyCreationForm::operator=( ShrubberyCreationForm& rhs ) {
    (void)rhs;
    return *this;
}

void    ShrubberyCreationForm::execute( const Bureaucrat& executor ) const
{
    if ( this->getSigned() == false )
        throw AForm::NotSignedException();
    else if ( executor.getGrade() > this->getGradeToExc()) {
        throw AForm::GradeTooLowException();
    }

    std::ofstream file( this->getName() + "_shrubbery" );
        file << "           ^" << std::endl;
        file << "          ^^^" << std::endl;
        file << "         ^^^^^" << std::endl;
        file << "        ^^^^^^^" << std::endl;
        file << "       ^^^^^^^^^" << std::endl;
        file << "      ^^^^^^^^^^^" << std::endl;
        file << "     ^^^^^^^^^^^^^" << std::endl;
        file << "    ^^^^^^^^^^^^^^^" << std::endl;
        file << "   ^^^^^^^^^^^^^^^^^" << std::endl;
        file << "  ^^^^^^^^^^^^^^^^^^^" << std::endl;
        file << " ^^^^^^^^^^^^^^^^^^^^^" << std::endl;
        file << "^^^^^^^^^^^^^^^^^^^^^^^" << std::endl;
        file << "         |||||" << std::endl;
        file << "         |||||" << std::endl;
    file.close();
}