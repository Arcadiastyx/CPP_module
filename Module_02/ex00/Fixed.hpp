/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inaranjo <inaranjo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 12:52:06 by inaranjo          #+#    #+#             */
/*   Updated: 2024/01/16 17:48:13 by inaranjo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#define GREEN "\e[92;5;118m"
#define RESET "\e[0m"

class Fixed
{
    private:
        int              _fpInteger;
        static const int _fracBitInteger = 8;
    
    public:
    Fixed();
    Fixed(const Fixed& copy);
    ~Fixed();
    Fixed& operator=(const Fixed &rhs);
        int     getRawBits(void) const;
        void    setRawBits(int const raw);
    
};


#endif