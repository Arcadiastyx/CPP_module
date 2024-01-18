/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inaranjo <inaranjo <inaranjo@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 13:08:58 by inaranjo          #+#    #+#             */
/*   Updated: 2024/01/17 14:40:23 by inaranjo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
    private: 
        int                 _fixedPointValue;
        static const int    _fractlBits = 8;

    public:
    Fixed();
    Fixed( const int n );
    Fixed( const float n );
    Fixed( const Fixed &copy );
    ~Fixed();
    Fixed &operator=( const  Fixed &rhs );
        int     getRawBit() const;
        void    setRawBit( const  int n );
        float   toFloat() const;
        int     toInt();

        bool    operator>( const Fixed &rhs ) const ;
        bool    operator<( const Fixed &rhs ) const ;
        bool    operator>=( const Fixed &rhs ) const ;
        bool    operator<=( const Fixed &rhs ) const ;
        bool    operator==( const Fixed &rhs ) const ;
        bool    operator!=( const Fixed &rhs ) const ;

        Fixed   operator+( const Fixed &rhs ) const ;
        Fixed   operator-( const Fixed &rhs ) const ;
        Fixed   operator*( const Fixed &rhs ) const ;
        Fixed   operator/( const Fixed &rhs ) const ;

        Fixed&  operator++( void ); // prefix
        Fixed   operator++( int ); // postfix
        Fixed&  operator--( void ); // prefix
        Fixed   operator--( int ); // postfix

        static Fixed& min( Fixed &a, Fixed &b );
        static const Fixed& min( const Fixed &a, const Fixed &b );
        static Fixed& max( Fixed &a, Fixed &b );
        static const Fixed& max( const Fixed &a, const Fixed &b );


};

std::ostream & operator<<( std::ostream & o, Fixed const & i );


#endif