/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inaranjo <inaranjo <inaranjo@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 13:11:09 by inaranjo          #+#    #+#             */
/*   Updated: 2024/01/18 01:01:38 by inaranjo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main ( void )
{
    Fixed        a;
    Fixed        e(6);
    Fixed        c(6.45f);
    Fixed const  b( Fixed( 5.05f ) * Fixed( 2 ) );
    Fixed const  d(Fixed(2) * Fixed(e));

    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    std::cout << b << std::endl;


    std::cout <<  d << std::endl;

    std::cout << Fixed::max( a, b ) << std::endl;

    return 0;
}