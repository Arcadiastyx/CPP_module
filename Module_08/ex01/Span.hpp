/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inaranjo <inaranjo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 13:40:37 by inaranjo          #+#    #+#             */
/*   Updated: 2024/02/06 19:30:36 by inaranjo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP    

#include <iostream>
#include <algorithm>
#include <vector>
#include <exception>
#include <limits>
#include <cstdlib>
#include <ctime> 

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

class Span
{
    private:
        std::vector<int>    _intContainer;
        unsigned int        _maxN; 

        Span();
        
    public:
        /*Canonique + argument*/ 
        Span(unsigned int N);
        Span(const Span& cpy);
        ~Span();
        Span& operator=(const Span& rhs);
        
        /*Members Fonction*/
        void   addNumber(int n);
        int    shortestSpan();
        int    longestSpan();

};

#endif