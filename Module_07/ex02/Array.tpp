/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inaranjo <inaranjo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 15:23:55 by inaranjo          #+#    #+#             */
/*   Updated: 2024/02/01 17:19:25 by inaranjo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.h"

template <typename T>
Array<T>::Array() : elements(nullptr), _size(0) {}

template <typename T>
Array<T>::Array(unsigned int n) : _size(n)
{
    elements = new T[n](); //  () init par defaut
}

template <typename T>
Array<T>::Array(const Array &other) : elements(nullptr), _size(0)
{
    *this = other;
}

template <typename T>
Array<T> &Array<T>::operator=(const Array &other)
{
    if (this != &other)
    {
        delete[] elements;
        _size = other._size;
        elements = new T[_size];
        for (unsigned int i = 0; i < _size; ++i)
        {
            elements[i] = other.elements[i];
        }
    }
    return *this;
}

template <typename T>
Array<T>::~Array() 
{
    std::cout << RED <<"[Array Destructor Called]" << RESET <<std::endl;
    delete[] elements;
}

template <typename T>
T &Array<T>::operator[](unsigned int index)
{
    if (index >= _size)
        throw std::out_of_range("Index out of bounds");
    return elements[index];
}

template <typename T>
const T &Array<T>::operator[](unsigned int index) const {
    if (index >= _size) {
        throw std::out_of_range("Index out of bounds");
    }
    return elements[index];
}

template <typename T>
unsigned int Array<T>::size() const 
{
    return _size;
}
