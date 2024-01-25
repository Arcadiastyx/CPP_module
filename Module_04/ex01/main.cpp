/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inaranjo <inaranjo <inaranjo@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 12:44:07 by inaranjo          #+#    #+#             */
/*   Updated: 2024/01/25 18:19:54 by inaranjo         ###   ########.fr       */
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
   

    std::cout <<std::endl;
    std::cout << "---------------Copy of a Dog and Cat---------------" << std::endl << std::endl;
    Animal dogA;
    Cat catA;

    dogA = catA;
  
    std::cout << VIOLET <<"[I m the copy type of catA :] " << RESET << RED << dogA.getType() << RESET << std::endl;

    return 0;
}