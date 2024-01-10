/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inaranjo <inaranjo <inaranjo@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 14:00:21 by inaranjo          #+#    #+#             */
/*   Updated: 2024/01/10 16:57:52 by inaranjo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    size_t N = 2; 
    Zombie  *zombX = zombieHorde(N, "ZombX");

    for(size_t i = 0; i < N; i++)
        zombX[i].annouce();
    delete [] zombX; 
    return 0;
}