/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inaranjo <inaranjo <inaranjo@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 12:02:30 by inaranjo          #+#    #+#             */
/*   Updated: 2024/01/09 19:51:00 by inaranjo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <iomanip>
#include "Zombie.h"

class Zombie
{
    private: 
        std::string _name;
    
    public:
    Zombie(std::string name);
    ~Zombie();
        void    annouce(void);
        void    annouce2(void);
};

Zombie* newZombie( std::string name );
void    randomChump( std::string name );


#endif  //ZOMBIE_HPP