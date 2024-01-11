/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inaranjo <inaranjo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 13:08:02 by inaranjo          #+#    #+#             */
/*   Updated: 2024/01/11 15:37:20 by inaranjo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class HumanB
{
    private:
        Weapon*     _weapon;
        std::string _name;
    
    public:
    HumanB(std::string name);
    ~HumanB();
        void    attack(void);
        void    setWeapon(Weapon&  weapon);
};

