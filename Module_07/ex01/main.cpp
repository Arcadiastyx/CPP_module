/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inaranjo <inaranjo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 14:03:43 by inaranjo          #+#    #+#             */
/*   Updated: 2024/02/01 14:15:00 by inaranjo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Iter.hpp"

/*
    Il est egalement possible de mettre en temple non pas un type mais egalement des fonctions : 
        - ainsi on peut faire de la programation generique
*/

int main()
{
    int intArray[] = {1, 2, 3, 4, 5};
    double doubleArray[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    std::string stringArray[] = {"one", "two", "three", "four", "five"};

    std::cout << "Integer array:" << std::endl;
    iter(intArray, 5, printElement<int>);

    std::cout << "Double array:" << std::endl;
    iter(doubleArray, 5, printElement<double>);

    std::cout << "String array:" << std::endl;
    iter(stringArray, 5, printElement<std::string>);

    return 0;
}