/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inaranjo <inaranjo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 12:44:07 by inaranjo          #+#    #+#             */
/*   Updated: 2024/01/25 15:10:35 by inaranjo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int main( void )
{
    std::cout << "---------------Animals out of Array---------------" << std::endl << std::endl;
    
    const Animal* i = new Cat();
    const Animal* j = new Dog();
    

    std::cout <<std::endl;
    std::cout << "---------------Animals in the Array---------------" << std::endl << std::endl;
    
    const Animal* animals[4] = { new Dog(), new Dog(), new Cat(), new Cat() };
    for ( int i = 0; i < 4; i++ ) {
        delete animals[i];
    }
    

    std::cout <<std::endl;
    std::cout << "---------------Idea s from Dog and Cat---------------" << std::endl << std::endl;
    i->printIdeas();
    j->printIdeas();
    
    delete i;
    delete j;
    
    return 0;
}