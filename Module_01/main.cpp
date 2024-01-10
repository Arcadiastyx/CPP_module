/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inaranjo <inaranjo <inaranjo@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 12:21:05 by inaranjo          #+#    #+#             */
/*   Updated: 2024/01/10 13:15:02 by inaranjo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    std::string name;

    std::cout << " ENTER a Zombie Name : ";
    std::cin >> name;
    std::cout << " Zombie : " << name << " , Will be add to the STACK \n" << std::endl;
    Zombie  zomb1(name);
    zomb1.annouce();

    std::cout << " ENTER a Zombie Name : ";
    std::cin >> name;
    std::cout << " Zombie : " << name << std::setw(10) << " , Will be add to the HEAP\n" << std::endl;
    Zombie* zomb2 = newZombie(name);
    zomb2->annouce2();
    delete zomb2;
    return 0;

}
