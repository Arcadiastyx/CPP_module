/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inaranjo <inaranjo <inaranjo@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 14:18:43 by inaranjo          #+#    #+#             */
/*   Updated: 2024/01/22 17:01:13 by inaranjo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main( void )
{
    ClapTrap player1("Z");
    ScavTrap player2("A");
    FragTrap player3("K");
    std::cout << std::endl;

    player1.attack("Dude1");
    player2.attack("Dude2");
    player3.attack("Dude3");
    std::cout << std::endl;

    player1.takeDamage(10);
    player2.takeDamage(10);
    player3.takeDamage(10);
    std::cout << std::endl;

    player1.beRepaired(20);
    player2.beRepaired(20);
    player3.beRepaired(20);
    std::cout << std::endl;

    player1.scream();
    player2.guardGate();
    player3.highFives();
    std::cout << std::endl;

    return EXIT_SUCCESS;
}