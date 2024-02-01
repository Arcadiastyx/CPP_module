/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inaranjo <inaranjo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 15:28:06 by inaranjo          #+#    #+#             */
/*   Updated: 2024/02/01 17:24:04 by inaranjo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.h"
#include "Array.tpp"

int main()
{
    /*--------------------------------------------------------------------------------*/
    
    std::cout << std::endl;
    std::cout << YELLOW << "[Constuctor Array by default + unsigned int]" << RESET << std::endl;
    Array<int> defaultArray;
    std::cout << "Default array size: " << defaultArray.size() << std::endl;

    Array<int> sizedArray(5);
    std::cout << "Sized array size: " << sizedArray.size() << std::endl << std::endl;
    
    std::cout << YELLOW << "[Init Array + Display]" << RESET << std::endl;
    for (unsigned int i = 0; i < sizedArray.size(); ++i)
        sizedArray[i] = i * i;
    
    for (unsigned int i = 0; i < sizedArray.size(); ++i)
        std::cout << "sizedArray[" << i << "] = " << sizedArray[i] << std::endl;
        
    /*--------------------------------------------------------------------------------*/
    std::cout << std::endl;
    std::cout << YELLOW << "[Constuctor by Copy]" << RESET << std::endl;
    Array<int> copiedArray = sizedArray;
    std::cout << "Copied array size: " << copiedArray.size() << std::endl;

    /*--------------------------------------------------------------------------------*/
    
    std::cout << std::endl;
    std::cout << YELLOW << "[Operatetor d assignement]" << RESET << std::endl;
    Array<int> assignedArray;
    assignedArray = sizedArray;
    std::cout << "Assigned array size: " << assignedArray.size() << std::endl;
    
    /*--------------------------------------------------------------------------------*/
    std::cout << std::endl;
    std::cout << YELLOW << "[Try and Catch]" << RESET << std::endl;
    try
    {
        std::cout << "Trying to access out-of-bounds element: " << assignedArray[6] << std::endl;
        
    } catch (std::exception &e)
    {
        std::cout << ORANGE <<"Exception caught: " << RESET << e.what() << std::endl;
    }
    /*--------------------------------------------------------------------------------*/
    std::cout << std::endl;

    return 0;
}