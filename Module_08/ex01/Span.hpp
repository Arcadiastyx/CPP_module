/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inaranjo <inaranjo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 13:40:37 by inaranjo          #+#    #+#             */
/*   Updated: 2024/02/06 16:10:09 by inaranjo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP    

#include <iostream>
#include <algorithm>
#include <vector>
#include <exception>
#include <limits>

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

        class notFoundException : public std::exception 
        {
            const char* what() const throw() {return "max-min not found";}
        };
        
        class needTwooException : public std::exception
        { 
            const char* what() const throw() {return "Not enough numbers to find a span";}
        };
};



#endif