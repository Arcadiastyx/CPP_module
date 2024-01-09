/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inaranjo <inaranjo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 12:21:05 by inaranjo          #+#    #+#             */
/*   Updated: 2024/01/09 17:21:52 by inaranjo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    std::string name = "Zak";
    std::string name2 = "Jun";

    Zombie zomb1(name);
    zomb1.accounce();

    Zombie* zomb2 = newZombie(name2);
    zomb2->accounce();
    delete zomb2;
 
}