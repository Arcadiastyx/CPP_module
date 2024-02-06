/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inaranjo <inaranjo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 13:40:33 by inaranjo          #+#    #+#             */
/*   Updated: 2024/02/06 16:46:26 by inaranjo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int N) : _maxN(N)
{
    std::cout << "constructor argument called" << std::endl;
}

Span::Span(const Span& cpy)
{
    std::cout << "Copy constructor" << std::endl;
    *this = cpy;
}

Span::~Span()
{
    std::cout << "destructor called" << std::endl;
}

Span& Span::operator=(const Span& rhs)
{
    std::cout << "oeprator" << std::endl;
    if(this != &rhs)
    {
        _maxN = rhs._maxN;
        _intContainer = rhs._intContainer;
    }
    return *this;
    
}

void Span::addNumber(int number)
{
    if (_intContainer.size() >= _maxN)
        throw std::length_error("Maximum capacity reached");
    _intContainer.push_back(number);
}

int Span::shortestSpan() 
{
    if (_intContainer.size() < 2)
        throw std::logic_error("Not enough numbers to find a span");
    std::sort(_intContainer.begin(), _intContainer.end());
    
    int minSpan = std::numeric_limits<int>::max();
    
    for (size_t i = 0; i < _intContainer.size() - 1; ++i)
    {
        int currentSpan = _intContainer[i + 1] - _intContainer[i];
        if (currentSpan < minSpan) 
            minSpan = currentSpan;
    }
    return minSpan;
}

int Span::longestSpan()
{
    if (_intContainer.size() < 2) 
        throw std::logic_error("Not enough numbers to find a span");
    return ( *std::max_element( _intContainer.begin(), _intContainer.end() ) - *std::min_element( _intContainer.begin(), _intContainer.end() ) );
}
