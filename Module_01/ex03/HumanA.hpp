/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inaranjo <inaranjo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 13:01:43 by inaranjo          #+#    #+#             */
/*   Updated: 2024/01/11 13:07:57 by inaranjo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanA
{
    private:
        Weapon*      _weapon;
        std::string  _name;

    public:
    HumanA(std::string name,Weapon weapon);
    ~HumanA();
        void    attack();
        
};

#endif