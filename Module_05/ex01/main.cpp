/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inaranjo <inaranjo <inaranjo@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 10:21:23 by inaranjo          #+#    #+#             */
/*   Updated: 2024/01/30 10:04:37 by inaranjo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

        
int main(void)
{

    try
    {
        Bureaucrat b2("B2", 151);
        Form f2("F2", 150, 150);

        std::cout << b2 << std::endl;
        std::cout << f2 << std::endl;
        b2.signForm(f2);
        std::cout << f2 << std::endl;
    }
    catch (std::exception & e)
    {
        std::cout << "Grade out of range " << std::endl;
    }

    return (0);
}