/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inaranjo <inaranjo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 12:40:12 by inaranjo          #+#    #+#             */
/*   Updated: 2024/01/25 14:50:39 by inaranjo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
    private:
        Brain *_catBrain;
    
    public: 
        Cat();
        Cat(const Cat &copy);
        virtual ~Cat();
        Cat &operator=(const Cat &rhs);
        
        virtual void    makeSound()const;
        virtual void    printIdeas() const;
        
};



#endif