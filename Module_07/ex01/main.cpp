/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inaranjo <inaranjo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 14:03:43 by inaranjo          #+#    #+#             */
/*   Updated: 2024/02/01 15:16:04 by inaranjo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Iter.hpp"

/*
    Il est egalement possible de mettre en temple non pas un type mais egalement des fonctions : 
        - ainsi on peut faire de la programation generique : 
        - iter peut travailler avec nimporte quel type de tableau     
*/

int main()
{
    int intArray[] = {1, 2, 3, 4, 5};
    double doubleArray[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    std::string stringArray[] = {"one", "two", "three", "four", "five"};

    std::cout << YELLOW << "[Integer array:]" << RESET << std::endl;
    iter(intArray, 5, printElement<int>);

    std::cout << YELLOW << "[Double array:]" << RESET << std::endl;
    iter(doubleArray, 5, printElement<double>);

    std::cout << YELLOW << "[String array:]" << RESET <<std::endl;
    iter(stringArray, 5, printElement<std::string>);

    return 0;
}