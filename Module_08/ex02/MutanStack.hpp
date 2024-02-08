/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutanStack.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inaranjo <inaranjo <inaranjo@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 14:52:50 by inaranjo          #+#    #+#             */
/*   Updated: 2024/02/08 14:58:40 by inaranjo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef
#define 

#include <iostream>
#include <algorithm>
#include <list>
#include <stack>
#include <deque>

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
