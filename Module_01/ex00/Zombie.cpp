/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inaranjo <inaranjo <inaranjo@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 12:09:10 by inaranjo          #+#    #+#             */
/*   Updated: 2024/01/10 13:21:31 by inaranjo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/* cree un obj Zombie avec un nom*/
Zombie::Zombie(std::string name)
{
    this->_name = name;
}

/*setup : destrcut pour affichage de message*/
Zombie::~Zombie()
{
    std::cout << this->_name << " : is dead...." << std::endl;
}

/* le zombie name affiche un message*/
void   Zombie::annouce()
{
    std::cout << this->_name <<  " : BrainZzzzZZzzZZz...." << std::endl;
    std::cout << this->_name << " : I will kiLllllLlll youuuuuuuUu !!!\n" << std::endl;
}

/* zombie parle */
void    Zombie::annouce2()
{
    std::cout << this->_name <<  " : BrainZzzzZZzzZZz...." << std::endl;
    std::cout << this->_name << " : MIiaaammm....I will eat you bitch !!!\n" << std::endl;
    
}