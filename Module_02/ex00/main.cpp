/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inaranjo <inaranjo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 12:53:26 by inaranjo          #+#    #+#             */
/*   Updated: 2024/01/16 17:55:35 by inaranjo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void )
{
    Fixed a;
    Fixed b( a );
    Fixed c;

    c = b;

    std::cout << GREEN << a.getRawBits() << RESET << std::endl;
    std::cout << GREEN << b.getRawBits() << RESET << std::endl;
    std::cout << GREEN << c.getRawBits() << RESET << std::endl;

    return 0;
}