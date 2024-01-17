/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inaranjo <inaranjo <inaranjo@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 02:25:39 by inaranjo          #+#    #+#             */
/*   Updated: 2024/01/17 03:58:56 by inaranjo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(): _fixePointValue(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int n): _fixePointValue(n << _fracBitInteger)
{
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float n): _fixePointValue(roundf(n * (1 << _fracBitInteger)))
{
    std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& copy)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = copy;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed &rhs)
{
    std::cout << "Copy assignment operator called" << std::endl;
    
    if(this != &rhs)
        _fixePointValue = rhs.getRawBit();
    return  *this;

}

int Fixed::getRawBit() const
{
    return (this->_fixePointValue);
}

void    Fixed::setRawBit(int const n)
{
    this->_fixePointValue = n;   
}

float   Fixed::toFloat( void ) const
{
    return  ((float)_fixePointValue) / (1 << _fracBitInteger);
}

int     Fixed::toInt( void ) const
{
    return (_fixePointValue >> _fracBitInteger);
}

std::ostream & operator<<( std::ostream & o, Fixed const & i ) 
{
    o << i.toFloat();
    return o;
}