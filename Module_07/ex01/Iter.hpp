/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inaranjo <inaranjo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 14:00:33 by inaranjo          #+#    #+#             */
/*   Updated: 2024/02/01 15:08:14 by inaranjo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T, typename Function>
void iter(T* array, size_t length, Function func) 
{
    for (size_t i = 0; i < length; ++i) 
    {
        func(array[i]);
    }
}

template <typename T>
void printElement(T& element)
{
    std::cout << element << std::endl;
}

#endif 