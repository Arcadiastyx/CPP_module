/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inaranjo <inaranjo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 12:40:12 by inaranjo          #+#    #+#             */
/*   Updated: 2024/01/23 16:39:58 by inaranjo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
    public: 
        Cat();
        Cat(const Cat &copy);
        virtual ~Cat();
        Cat &operator=(const Cat &rhs);
        
        virtual void    makeSound()const;
    
};


#endif