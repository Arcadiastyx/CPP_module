/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inaranjo <inaranjo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 12:52:09 by inaranjo          #+#    #+#             */
/*   Updated: 2024/02/01 12:31:19 by inaranjo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(): _fpInteger(0)
{
    std::cout << "Construct by default called " << std::endl;
}

Fixed::Fixed(const Fixed& copy)
{
    std::cout << "Construct by copy called " << std::endl;
    *this = copy;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called " << std::endl;
}

Fixed &Fixed::operator=(const Fixed &rhs)
{
    std::cout << "(*o)Fixed Assignation operator called" << std::endl;
    if(this != &rhs)
        this->_fpInteger = rhs.getRawBits();
    return *this;
}

  int     Fixed::getRawBits(void) const
  {
    std::cout << "(*f)getRawBits member function called" << std::endl;
    return (this->_fpInteger); 
  }

  void  Fixed::setRawBits(int const raw)
  {
    std::cout << "(*f)setRawBits member function called" << std::endl;
    this->_fpInteger = raw;
  }