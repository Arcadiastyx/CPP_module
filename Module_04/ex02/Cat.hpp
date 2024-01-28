/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inaranjo <inaranjo <inaranjo@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 12:40:12 by inaranjo          #+#    #+#             */
/*   Updated: 2024/01/25 19:29:42 by inaranjo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal
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