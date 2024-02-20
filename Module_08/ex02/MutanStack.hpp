/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutanStack.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inaranjo <inaranjo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 14:52:50 by inaranjo          #+#    #+#             */
/*   Updated: 2024/02/20 15:49:32 by inaranjo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANSTACK_HPP
#define MUTANSTACK_HPP

#include <iostream>
#include <algorithm>
#include <list>
#include <stack>
#include <deque>

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


template< typename T, class Container = std::deque< T > > 
class MutantStack : public std::stack< T, Container >
{

    private:

    public:
        MutantStack( void ) {};
        ~MutantStack( void ) {};
        MutantStack( const MutantStack& rhs ) { *this = rhs; }
        MutantStack&    operator=( const MutantStack& rhs )
        {
            std::stack< T, Container >::operator=( rhs );
            return *this;
        }

    typedef typename Container::iterator    iterator;

    iterator    begin() { return this->c.begin(); }
    iterator    end() { return this->c.end(); }
};

#endif
