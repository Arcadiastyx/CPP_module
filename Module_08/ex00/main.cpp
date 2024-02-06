/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inaranjo <inaranjo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 10:41:36 by inaranjo          #+#    #+#             */
/*   Updated: 2024/02/06 11:00:24 by inaranjo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Easyfind.hpp"

int main()
{
    std::vector<int> vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);

    try 
    {
        std::cout << "[Found]> " << YELLOW << *easyfind(vec, 5) << RESET <<std::endl;
    
    } catch (const NotFoundException& e) 
    {
        std::cout << e.what() << std::endl;
    }

    std::cout << std::endl;

    try 
    {
        std::cout << "[Found]> " << YELLOW << *easyfind(vec, 6) << RESET <<std::endl;
    
    } catch (const NotFoundException& e) 
    {
        std::cout << RED << e.what() << RESET << std::endl;
    }
   
    return 0;
}
