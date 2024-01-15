/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inaranjo <inaranjo <inaranjo@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 10:14:22 by inaranjo          #+#    #+#             */
/*   Updated: 2024/01/15 11:52:36 by inaranjo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main() 
{
    Harl harl;
    std::string level;

    while (true)
    {
        std::cout << "Entrez le niveau de plainte (DEBUG, INFO, WARNING, ERROR) ou 'q' pour quitter : ";
        std::cin >> level;

        if (level == "q")
            break;

        harl.complain(level);
    }
    return 0;
}