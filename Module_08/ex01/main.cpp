/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inaranjo <inaranjo <inaranjo@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 13:38:53 by inaranjo          #+#    #+#             */
/*   Updated: 2024/02/07 18:05:46 by inaranjo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
    /*--------------------------TEST_1--------------------------------*/
    
    std::cout << YELLOW << "TEST-1" << RESET <<std::endl;
    Span sp = Span(5);

    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    
    std::cout << "Shortest Span: " << GREEN << sp.shortestSpan() << RESET << std::endl;
    std::cout << "Longest Span: " << GREEN << sp.longestSpan() << RESET << std::endl;

    /*--------------------------TEST_2--------------------------------*/

    std::cout << YELLOW << "TEST-2" << RESET <<std::endl;
    try
    {
        Span sp2 = Span(5);

        sp2.addNumber(4);
        sp2.addNumber(7);
        sp2.addNumber(2);
        sp2.addNumber(10);
        sp2.addNumber(5);

        std::cout << "Shortest Span: " << GREEN << sp2.shortestSpan() << RESET << std::endl;
        std::cout << "Longest Span: " << GREEN << sp2.longestSpan() << RESET << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << "exception found " << e.what() << '\n';
    }
    
    /*--------------------------TEST_3--------------------------------*/
    
    std::cout << YELLOW << "TEST-3" << RESET << std::endl;
    
    std::srand(static_cast<unsigned int>(std::time(nullptr)));
    
    Span sp3(10000);

    for (int i = 0; i < 10000; ++i) 
        sp3.addNumber(std::rand());

    try 
    {
        std::cout << "Shortest Span: " << GREEN << sp3.shortestSpan() << RESET << std::endl;
        std::cout << "Longest Span: " << GREEN << sp3.longestSpan() << RESET << std::endl;
        
    } catch (const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
    
     /*--------------------------TEST_4--------------------------------*/
    
    std::cout << YELLOW << "TEST-4" << RESET << std::endl;

    try
    {
        Span sp4 = Span(5);
        sp4.addNumber(1);
        sp4.addNumber(2);
        sp4.addNumber(3);
        sp4.addNumber(4);
        sp4.addNumber(5);

        
        std::vector<int> v;
        v.push_back(6);
        v.push_back(7);
        v.push_back(8);
        v.push_back(9);
        v.push_back(10);
        
        sp4.insertRangeN(v.begin(), v.end());
        std::cout << "Shortest Span: " << GREEN << sp4.shortestSpan() << RESET << std::endl;
        std::cout << "Longest Span: " << GREEN << sp4.longestSpan() << RESET << std::endl;
 
        sp4.printContents();
    
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    
    return 0;
}
