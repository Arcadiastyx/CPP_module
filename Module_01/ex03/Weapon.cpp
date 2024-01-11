/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inaranjo <inaranjo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 12:42:24 by inaranjo          #+#    #+#             */
/*   Updated: 2024/01/11 12:59:47 by inaranjo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

/*
- on veut que le creator, construise : 
    * un type d arme ( le type d arme est un string ex : "Hache en or" = type d arme)
    * mais on veut egalement pouvoir changer le type d Hache ( ex : Hache en metal)
    * pour le coup on utilise la fonction setType qui va stocker dans _type un nouvea type d arme
*/
Weapon::Weapon(std::string type)
{
    this->setType(type);
}

/*le destructeur libera la memoire des varaibles locals par defaut*/
Weapon::~Weapon(){}

/*
 - grace a la fonction getType on va etre capable de :
    * recuperer la valeur de _type et donc notre arme via un return
*/
const   std::string&    Weapon::getType(void)
{
    return  this->_type;
}

/*
- grace a la fonction setType on va etre capable de :
    * definir quel type d arme on veut avoir 
    * pour sa on dit que notre type d arme peut devenir un nouveau type d arme
*/
void    Weapon::setType(std::string newType)
{
    this->_type = newType;
}