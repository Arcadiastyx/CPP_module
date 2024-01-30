/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inaranjo <inaranjo <inaranjo@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 15:14:58 by inaranjo          #+#    #+#             */
/*   Updated: 2024/01/30 16:10:15 by inaranjo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"
#include <fstream>

class ShrubberyCreationForm : public AForm 
{

private:
    const std::string   _target;

    ShrubberyCreationForm();

public:
    ShrubberyCreationForm( const std::string& target );
    ShrubberyCreationForm( const ShrubberyCreationForm& src );
    ~ShrubberyCreationForm();

    ShrubberyCreationForm&  operator=( ShrubberyCreationForm& rhs );

    void        execute( const Bureaucrat& executor ) const;

};

#endif