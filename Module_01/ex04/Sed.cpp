/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inaranjo <inaranjo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 16:51:23 by inaranjo          #+#    #+#             */
/*   Updated: 2024/01/11 16:54:36 by inaranjo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

Sed:: Sed(std::string& filename, std::string& s1, std::string& s2) :
_filename(filename), _s1(s1), _s2(s2) {}

Sed::~Sed(){}

void    Sed::replace(std::string s1, std::string s2)
{
    
}
