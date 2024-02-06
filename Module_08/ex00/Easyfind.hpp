/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inaranjo <inaranjo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 10:42:15 by inaranjo          #+#    #+#             */
/*   Updated: 2024/02/06 11:06:37 by inaranjo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <algorithm> 
#include <exception> 
#include <vector>

#define YELLOW "\e[93;5;226m"
#define RESET  "\e[0m"
#define GREEN  "\e[92;5;118m"
#define VIOLET "\033[35m"
#define RED "\033[31m"
#define ORANGE "\033[38;5;208m"
#define BLUE "\033[34m"
#define LIGHT_BLUE "\033[36m"
#define LIGHT_CYAN "\033[96m"
#define LIGHT_PURPLE "\033[95m"
#define MAGENTA "\033[35m"
#define LIGHT_ORANGE "\033[38;5;208m"
#define GRAY "\033[90m"

class NotFoundException : public std::exception
{
    public:
        const char* what() const throw() {return "Element not found";}
};

template <typename T>
typename T::iterator easyfind(T& container, int n)
{
    typename T::iterator it = std::find(container.begin(), container.end(), n);
    if (it == container.end())
        throw NotFoundException();
    return it;
}

#endif
