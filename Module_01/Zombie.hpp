/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inaranjo <inaranjo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 12:02:30 by inaranjo          #+#    #+#             */
/*   Updated: 2024/01/09 17:46:41 by inaranjo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include "Zombie.h"

class Zombie
{
    private: 
        std::string _name;

    public:
    Zombie(std::string name);
    ~Zombie();
        void    accounce(void);    
};

Zombie* newZombie(std::string name);
void    randomChump(std::string name);

#endif