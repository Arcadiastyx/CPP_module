/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inaranjo <inaranjo <inaranjo@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 16:08:43 by inaranjo          #+#    #+#             */
/*   Updated: 2024/01/11 19:39:00 by inaranjo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

int main(int argc, char* argv[]) 
{
    if (argc != 4)
    {
        std::cerr << argv[0] << " <filename> <find string> <replace string>" << std::endl;
        return 1;
    }
    Sed file(argv[1], argv[2], argv[3]);
    file.replace();

    return 0;
}