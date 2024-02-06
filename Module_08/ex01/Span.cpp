/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inaranjo <inaranjo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 13:40:33 by inaranjo          #+#    #+#             */
/*   Updated: 2024/02/06 19:34:21 by inaranjo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int N) : _maxN(N)
{
    //std::cout << "constructor argument called" << std::endl;
}

Span::Span(const Span& cpy)
{
    //std::cout << "Copy constructor" << std::endl;
    *this = cpy;
}

Span::~Span()
{
    std::cout << RED << "~" << RESET << std::endl;
}

Span& Span::operator=(const Span& rhs)
{
    //std::cout << "oeprator" << std::endl;
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


/*  _intContainer = {4, 7, 2, 10, 5}
    *-----------------------------------------*
    1. Vérification de la taille du conteneur , dans ce cas oui car 5
    2. Tri du conteneur : {2, 4, 5, 7, 10}
    3. minSpan est initialement égal à la valeur maximale d'un int, soit 2147483647.
    4. À la première itération (i = 0), currentSpan = 4 - 2 = 2.
       À la deuxième itération (i = 1), currentSpan = 5 - 4 = 1.
       À la troisième itération (i = 2), currentSpan = 7 - 5 = 2.
       À la quatrième itération (i = 3), currentSpan = 10 - 7 = 3
       
    5. À la première itération 
        currentSpan = 2 < maxInt == oui ---> minSpan  mis a jour = 2
        [apres iteration]>
        currentSpan = 1 < 2 == oui -----> minSpan mise a jour = 1
        [apres iteration]>
        currentSpan = 2 < 1 == non ----> on a donc trouve notre spanMin
        minSpan = 1;
        
    6. La fonction renvoie 1.
*/
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


/*  _intContainer = {4, 7, 2, 10, 5}
*----------------------------------------------*
    1. Vérification de la taille du conteneur
    2. Recherche du plus grand élément - Recherche du plus petit élément 
    3. return 10 − 2 = 8
*/
int Span::longestSpan()
{
    if (_intContainer.size() < 2) 
        throw std::logic_error("Not enough numbers to find a span");
    return ( *std::max_element( _intContainer.begin(), _intContainer.end() ) - *std::min_element( _intContainer.begin(), _intContainer.end() ) );
}

