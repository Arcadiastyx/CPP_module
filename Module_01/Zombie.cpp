/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inaranjo <inaranjo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 12:09:10 by inaranjo          #+#    #+#             */
/*   Updated: 2024/01/09 17:08:06 by inaranjo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/*le constructeur cree un obj_Zombie_avec_un_nom*/
Zombie::Zombie(std::string name)
{
    this->_name = name;
}

/*le destructeur va tuer l obj_Zombie_avec_un_nom localement*/
Zombie::~Zombie()
{
    std::cout << this->_name << ": is dead " << std::endl;
}

/*ce que dis le zombie*/
void    Zombie::accounce()
{
    std::cout << this->_name << " : BraiiiiiiinnnzzzZ..." << std::endl;
}



