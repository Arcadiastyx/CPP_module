/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inaranjo <inaranjo <inaranjo@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 10:52:58 by inaranjo          #+#    #+#             */
/*   Updated: 2024/01/31 11:32:39 by inaranjo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalerConvert.hpp"

int main()
{
    std::string input;
    std::cout << GREEN << "PROGRAM ON" << RESET <<std::endl;
    while (true)
    {
         
        std::cout << YELLOW << "Enter a literal (or 'q' to quit): " << RESET;
        std::cin >> input;
        if (input == "q")
            break;

        ScalarConverter::convert(input);
    }

    std::cout << RED << "PROGRAM OFF" << RESET <<std::endl;
    return 0;
}
