/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inaranjo <inaranjo <inaranjo@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 10:21:23 by inaranjo          #+#    #+#             */
/*   Updated: 2024/01/29 13:46:14 by inaranjo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main( void )
{
    try 
    {
        Bureaucrat Worker("Jacob", 1);

        //Worker.incrementGrade();
        Worker.decrementGrade();

        std::cout << Worker<< std::endl;
    } 
    catch (Bureaucrat::GradeTooHighException &e)
    {
       std::cout << e.what() << std::endl;
    }
    catch (Bureaucrat::GradeTooLowException &e)
    {
        std::cout <<e.what() << std::endl;
    }
        

    return 0;
}