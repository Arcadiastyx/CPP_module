/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inaranjo <inaranjo <inaranjo@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 14:18:43 by inaranjo          #+#    #+#             */
/*   Updated: 2024/01/22 16:09:35 by inaranjo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main( void )
{
    ClapTrap    player1("Billy");
    ClapTrap    player2("Zak");
    ScavTrap    player3("Jacob");
    ScavTrap    player4(player3);
    
    std::cout << std::endl;
    player1.attack("Dud1");
    player2.attack("Dude2");
    player3.attack("Dude3");
    player4.attack("Dude4");
    player1.attack("Morron1");
    std::cout << std::endl;
    player1.takeDamage(20);
    player2.takeDamage(20);
    player3.takeDamage(20);
    player4.takeDamage(20);
    std::cout << std::endl;
    player1.beRepaired(10);
    player2.beRepaired(10);
    player3.beRepaired(10);
    player4.beRepaired(10);
    std::cout << std::endl;
    player3.guardGate();
    std::cout << std::endl;


    return 0;
}