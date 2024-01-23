/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inaranjo <inaranjo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 12:37:28 by inaranjo          #+#    #+#             */
/*   Updated: 2024/01/23 12:39:53 by inaranjo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
    protected: 

    public:
        Animal();
        Animal(const Animal &copy);
        ~Animal();
        Animal &operator=(const Animal &rhs);
        
        void    getType();
        std::string setType(std::string Type);
};


#endif