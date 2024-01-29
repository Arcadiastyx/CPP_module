/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inaranjo <inaranjo <inaranjo@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 13:49:57 by inaranjo          #+#    #+#             */
/*   Updated: 2024/01/30 00:29:38 by inaranjo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
    private:
        const std::string   _name;
        bool                _signed;
        const int           _gradeToSign;
        const int           _gradeToExc;


    public:
        /*CANONIQUE FORM + ARGUMETS*/
        Form();
        Form( const std::string& name, int gradeToSign, int gradeToExc );
        Form(const Form &cpy);
        ~Form();
        Form &operator=(const Form &rhs);

        /*ACCESSORS MEMBER*/
        std::string getName() const;
        bool        getSigned() const;
        int         getGradeToSign() const;
        int         getGradeToExecute() const;

        void        beSigned( const Bureaucrat& bureaucrat );


        /*EXCEPTION CLASS*/
        class GradeTooHighException : public std::exception
        {
            public:
                virtual const char* what() const throw() { return "[Grade too high, out of grade range [High]1-150[Low]]"; }
        };

        class GradeTooLowException : public std::exception 
        {
            public:
                virtual const char* what() const throw() { return "[Grade too low, out of grade rage [High]1-150[Low]]"; }
        };

};  

std::ostream&   operator<<( std::ostream& o, const Form &rhs );

#endif