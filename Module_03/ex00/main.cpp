/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inaranjo <inaranjo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 14:18:43 by inaranjo          #+#    #+#             */
/*   Updated: 2024/01/18 17:52:34 by inaranjo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main( void )
{
    ClapTrap clap("Isaac");
    
    clap.attack("Dude");
    clap.takeDamage(5);
    clap.beRepaired(2);

    return EXIT_SUCCESS;
}