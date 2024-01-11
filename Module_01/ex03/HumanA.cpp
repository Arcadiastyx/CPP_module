/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inaranjo <inaranjo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 13:01:24 by inaranjo          #+#    #+#             */
/*   Updated: 2024/01/11 14:59:26 by inaranjo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

/* 
   Les paramètres du constructeur doivent obligatoirement être initialisés.
   Il existe trois façons d'initialiser un constructeur :
   1. Par une initialisation dite "liste d'initialisation".
   2. Dans le corps du constructeur.
   3. Dans le corps du constructeur, mais cette pratique est inhabituelle en C++.

   Attention : 
   - Pour les références, elles doivent être initialisées dès leur création, car elles ne peuvent pas être NULL.
   - L'utilisation de l'initialisation par liste d'initialisation est recommandée, notamment pour les références, car elle garantit une initialisation directe et respecte l'ordre d'initialisation défini par la déclaration des membres de la classe.
*/
HumanA::HumanA(std::string name, Weapon& weapon): _name(name), _weapon(weapon){}

HumanA::~HumanA(){}

/* -> permet au personnage de simuler une attaque
    vérifie si l'arme du personnage (_weapon) a un type différent de la chaîne de caractères vide = cela vérifie si le personnage a une arme
    - si c est le cas alors attack
    - si non il ne peut pas attack
    
    Note : L'utilisation de "this" est facultative ici pour faire référence
    * aux membres de la classe "_name" et "_weapon". Les membres peuvent être
    * utilisés sans "this" car il n'y a pas d'ambiguïté avec les variables locales
    * ou les paramètres ayant les mêmes noms.
*/
void    HumanA::attack()
{
    if(_weapon.getType() != "")
        std::cout << _name << " attacks with their " << _weapon.getType() << std::endl;
    else 
        std::cout << _name << " doesn't have a weapon to attack." << std::endl;
}


