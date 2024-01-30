/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inaranjo <inaranjo <inaranjo@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 12:36:01 by inaranjo          #+#    #+#             */
/*   Updated: 2024/01/30 15:10:47 by inaranjo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
    private:
        /*ATRIBUTS*/
        const std::string   _name; 
        bool                _signed;
        int                 _gradeToSign;
        int                 _gradeToExec; 

        AForm();
        
    public:
        /*CANONIQUE + ARGUMETS*/
        AForm(const std::string name, int gradeToSign, int gradeToExec);
        AForm(const AForm& cpy);
        ~AForm();
        AForm& operator=(const AForm& src);

        /*ACESSORS*/
        std::string     getName() const;
        bool            getSigned() const;
        int             getGradeToSign() const;
        int             getGradeToExc() const;

        /*FONCTION MEMBERS*/
        void            beSigned(const Bureaucrat& autorization); 
        virtual void    execute(const Bureaucrat& executor) const = 0;

        /*EXCEPTION CLASS*/
        class GradeTooHighException : public std::exception
        {
            virtual const char* what() const throw() {return "Grade To High, Form Not Allowed";}
        };

        class GradeTooLowException : public std::exception
        {
            virtual const char * what() const throw() {return "Grade To Low, Form Not Allowed";}
        };

        class NotSignedException : public std::exception 
        {
            virtual const char* what() const throw() { return "Form not signed"; }
        };

};

std::ostream&   operator<<( std::ostream& o, const AForm& src );


#endif