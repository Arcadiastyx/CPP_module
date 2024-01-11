/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inaranjo <inaranjo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 13:01:43 by inaranjo          #+#    #+#             */
/*   Updated: 2024/01/11 15:39:54 by inaranjo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class HumanA
{
    private:
        std::string  _name;
        Weapon&      _weapon;
        

    public:
    HumanA(std::string name, Weapon& weapon);
    ~HumanA();
        void    attack();
        
};



