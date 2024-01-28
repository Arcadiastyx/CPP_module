/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inaranjo <inaranjo <inaranjo@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 12:42:14 by inaranjo          #+#    #+#             */
/*   Updated: 2024/01/25 19:30:23 by inaranjo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal
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