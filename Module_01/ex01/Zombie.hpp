/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inaranjo <inaranjo <inaranjo@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 13:36:11 by inaranjo          #+#    #+#             */
/*   Updated: 2024/01/10 17:04:15 by inaranjo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

#define RED "\e[91m"
#define RESET "\e[0m"
#define YELLOW "\e[93;5;226m"

class Zombie
{
    private:
        std::string _name;
    
    public: 
    Zombie();
    ~Zombie();
        void    annouce(void);
        void    setName(std::string name);
};

    Zombie* zombieHorde(int N, std::string name);


#endif 