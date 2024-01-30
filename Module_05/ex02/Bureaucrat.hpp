/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inaranjo <inaranjo <inaranjo@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 10:22:17 by inaranjo          #+#    #+#             */
/*   Updated: 2024/01/30 15:10:24 by inaranjo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include <exception>

#define YELLOW "\e[93;5;226m"
#define RESET  "\e[0m"
#define GREEN  "\e[92;5;118m"
#define VIOLET "\033[35m"
#define RED "\033[31m"
#define ORANGE "\033[38;5;208m"
#define BLUE "\033[34m"
#define LIGHT_BLUE "\033[36m"
#define LIGHT_CYAN "\033[96m"
#define LIGHT_PURPLE "\033[95m"
#define MAGENTA "\033[35m"
#define LIGHT_ORANGE "\033[38;5;208m"
#define GRAY "\033[90m"

class AForm;

class Bureaucrat
{
    private:
        /*ATRIBUTS*/
        const std::string   _name;
        int                 _grade;

         Bureaucrat();
    
    public:
        /*CANONIQUE + ARGUMENTS*/
        Bureaucrat(const std::string name, int grade);
        Bureaucrat(const Bureaucrat& cpy);
        ~Bureaucrat();
        Bureaucrat &operator=(const Bureaucrat& rhs);

        /*ACESSORS*/
        std::string         getName() const;
        int                 getGrade() const ;

        /*FONCTION MEMBERS*/
        void                upGrade();
        void                downGrade();
        void                signForm( AForm& form );
        void                executeForm( const AForm& form ) const;  

        /*EXECPTION CLASS*/
        class GradeTooHighException : public std::exception
        {
            virtual const char* what() const throw() {return "Grade to High, Bureaucrat Grade Not Allowed";}
        };

        class GradeTooLowException : public std::exception
        {
           virtual const char* what() const throw() {return "Grade to Low, Bureaucrat Grade Not Allowed";}
        };
};

std::ostream& operator<<(std::ostream& o, const Bureaucrat& src);



#endif  