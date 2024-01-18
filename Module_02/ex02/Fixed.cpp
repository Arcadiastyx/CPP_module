/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inaranjo <inaranjo <inaranjo@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 13:10:49 by inaranjo          #+#    #+#             */
/*   Updated: 2024/01/18 00:37:43 by inaranjo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"


/*-------------------------Canonique Form-----------------------------------*/

Fixed::Fixed(): _fixedPointValue(0){
}

Fixed::Fixed( const int n) : _fixedPointValue(n << _fractlBits){  
}

Fixed::Fixed( const float n) : _fixedPointValue(roundf(n * (1 << _fractlBits))){  
}

Fixed::Fixed( const Fixed &copy)
{
    *this = copy;
}

Fixed::~Fixed(){
}

Fixed & Fixed::operator=( const Fixed &rhs)
{
    if(this == &rhs)
        _fixedPointValue = rhs.getRawBit();
    return *this;
}

/*-------------------Fonction Membre---------------------*/

int     Fixed::getRawBit() const
{
    return (this->_fixedPointValue);
}

void    Fixed::setRawBit( const int n )
{
    this->_fixedPointValue = n;
}

float   Fixed::toFloat() const
{
    return ((float)_fixedPointValue) / (1 << _fractlBits);
}

int     Fixed::toInt()
{
    return (_fixedPointValue >> _fractlBits);
}

/*----------------------Opérateur de comparaison---------------------*/

bool    Fixed::operator>( const Fixed &rhs ) const
{
    return  (_fixedPointValue > rhs.getRawBit());
}

bool    Fixed::operator<( const Fixed &rhs ) const
{
    return  (_fixedPointValue < rhs.getRawBit());
}

bool    Fixed::operator>=( const Fixed &rhs ) const
{
    return  (_fixedPointValue >= rhs.getRawBit());
}

bool    Fixed::operator<=( const Fixed &rhs ) const
{
    return  (_fixedPointValue <= rhs.getRawBit());
}

bool    Fixed::operator==( const Fixed &rhs ) const
{
    return  (_fixedPointValue == rhs.getRawBit());
}

bool    Fixed::operator!=( const Fixed &rhs ) const
{
    return  (_fixedPointValue != rhs.getRawBit());
}

/*--------------------Opérateur arithmétiques-------------------*/

Fixed   Fixed::operator+( const Fixed &rhs ) const
{
    return (Fixed(toFloat() + rhs.toFloat()));
}

Fixed   Fixed::operator-( const Fixed &rhs ) const
{
    return (Fixed(toFloat() - rhs.toFloat()));
}

Fixed   Fixed::operator*( const Fixed &rhs ) const
{
    return (Fixed(toFloat() * rhs.toFloat()));
}

Fixed   Fixed::operator/( const Fixed &rhs ) const
{
    return (Fixed(toFloat() / rhs.toFloat()));
}

/*-----------------Opérateur d incrementation----------------*/

Fixed&  Fixed::operator++(void)
{
    _fixedPointValue++;
    return *this;
}

Fixed   Fixed::operator++(int)
{
    Fixed tmp(*this);
    operator++();
    return tmp;
}

Fixed&  Fixed::operator--(void)
{
    _fixedPointValue--;
    return *this;
}

Fixed   Fixed::operator--(int)
{
    Fixed tmp(*this);
    operator--();
    return tmp;
}

/*-----------------Operateur  min/max----------------*/

Fixed&  Fixed::min(Fixed &a, Fixed &b)
{
    return (a < b ? a : b);
}

Fixed& Fixed::max(Fixed &a, Fixed &b)
{
    return (a > b ? a : b);
}

const Fixed&  Fixed::min(const Fixed &a, const Fixed &b)
{
    return (a < b ? a : b);
}

const Fixed& Fixed::max(const Fixed &a, const Fixed &b)
{
    return (a > b ? a : b);
}

/*---------------------iostream << surcharged-----------------*/

std::ostream&   operator<<(std::ostream &o, Fixed const &rhs)
{
    o << rhs.toFloat();
    return o;
}