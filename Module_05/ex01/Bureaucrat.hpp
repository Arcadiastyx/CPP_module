/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inaranjo <inaranjo <inaranjo@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 10:12:28 by inaranjo          #+#    #+#             */
/*   Updated: 2024/01/29 14:04:28 by inaranjo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat
{
    private:
        const std::string   _name; 
        int                 _grade;

    public:
        Bureaucrat();
        Bureaucrat(const std::string &name, int grade);
        Bureaucrat(const Bureaucrat &cpy);
        ~Bureaucrat();
        Bureaucrat &operator=(const Bureaucrat &rhs);

        std::string getName() const;
        int         getGrade() const;

        void          incrementGrade();
        void          decrementGrade();

        void        signForm( Form& form );

        /* ---------------- Exception Classes ---------------- */
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

std::ostream&   operator<<( std::ostream& o, const Bureaucrat& rhs );

#endif