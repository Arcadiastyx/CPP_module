/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inaranjo <inaranjo <inaranjo@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 02:20:40 by inaranjo          #+#    #+#             */
/*   Updated: 2024/01/17 03:57:05 by inaranjo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP 

#include  <iostream>
#include <cmath>

class Fixed
{
    private:
        int              _fixePointValue;
        static const int _fracBitInteger = 8;

    public:
        Fixed();
        Fixed(const int n);
        Fixed(const float n);
        Fixed(const Fixed &copy);
        ~Fixed();
        Fixed & operator=(const Fixed &rhs);
            float   toFloat( void ) const;
            int     toInt( void ) const;
            int     getRawBit()const;
            void    setRawBit(int const n);

};

std::ostream & operator<<( std::ostream & o, Fixed const & i );

#endif