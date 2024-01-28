/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inaranjo <inaranjo <inaranjo@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 17:33:21 by inaranjo          #+#    #+#             */
/*   Updated: 2024/01/25 19:40:40 by inaranjo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include "AAnimal.hpp"

class WrongAnimal 
{
    protected: 
        std::string _type;
    
    public:
        WrongAnimal( void );
        WrongAnimal( std::string type );
        WrongAnimal( const WrongAnimal& copy );
        ~WrongAnimal( void );
        WrongAnimal& operator=( const WrongAnimal& rhs );

    void            makeSound( void ) const;
    std::string     getType( void ) const; 
};


#endif