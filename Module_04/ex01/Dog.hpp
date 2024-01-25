/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inaranjo <inaranjo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 12:42:14 by inaranjo          #+#    #+#             */
/*   Updated: 2024/01/25 14:50:47 by inaranjo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
    private:
        Brain *_dogBrain;

    public: 
        Dog();
        Dog(const Dog &copy);
        virtual ~Dog();
        Dog &operator=(const Dog &rhs);

        virtual void makeSound()const;
        virtual void printIdeas() const;
};



#endif