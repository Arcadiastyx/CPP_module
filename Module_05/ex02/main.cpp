/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inaranjo <inaranjo <inaranjo@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 11:08:50 by inaranjo          #+#    #+#             */
/*   Updated: 2024/01/30 14:31:56 by inaranjo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"

int main()
{

    AForm f1("f11",5, 10);
    AForm f2(f1);
    AForm f3(f1); 

    f3 = f1;




    // try
    // {
    //     Bureaucrat staff("Jacob",2);
    //     staff.upGrade();
    //     std::cout << staff << std::endl;
        
    // }
    // catch(const std::exception& e)
    // {
    //     std::cerr << e.what() << '\n';
    // }
    
        
    
   

    return 0;
}