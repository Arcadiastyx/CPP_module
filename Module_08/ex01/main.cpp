/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inaranjo <inaranjo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 13:38:53 by inaranjo          #+#    #+#             */
/*   Updated: 2024/02/06 19:31:54 by inaranjo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
    std::cout << YELLOW << "TEST-1" << RESET <<std::endl;
    try
    {
        Span sp = Span( 5 );

        sp.addNumber( 4 );
        sp.addNumber( 7 );
        sp.addNumber( 2 );
        sp.addNumber( 10 );
        sp.addNumber( 5 );

        std::cout << "Shortest Span: " << GREEN << sp.shortestSpan() << RESET << std::endl;
        std::cout << "Longest Span: " << GREEN << sp.longestSpan() << RESET << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << "exception found " << e.what() << '\n';
    }
    
    std::cout << YELLOW << "TEST-2" << RESET << std::endl;
    
    std::srand(static_cast<unsigned int>(std::time(nullptr)));
    Span sp(10000);

    for (int i = 0; i < 10000; ++i) 
        sp.addNumber(std::rand());

    try 
    {
        std::cout << "Shortest Span: " << GREEN << sp.shortestSpan() << RESET << std::endl;
        std::cout << "Longest Span: " << GREEN << sp.longestSpan() << RESET << std::endl;
        
    } catch (const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
    
    
    return 0;
}
