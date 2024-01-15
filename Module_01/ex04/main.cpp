/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inaranjo <inaranjo <inaranjo@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 16:08:43 by inaranjo          #+#    #+#             */
/*   Updated: 2024/01/12 19:21:55 by inaranjo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

int main(int argc, char* argv[])    
{
    if (argc != 4)
    {
        std::cerr << YELLOW << "Argument Need: " << argv[0] << " <filename> <find string> <replace string>" <<  RESET << std::endl;
        return 1;
    }
    Sed arg(argv[1], argv[2], argv[3]);
    arg.replace();
    std::cout << GREEN << "Program Copiled...""[Successfully]""" << std::endl;
    return 0;
}