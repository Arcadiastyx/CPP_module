/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inaranjo <inaranjo <inaranjo@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 16:29:26 by inaranjo          #+#    #+#             */
/*   Updated: 2024/01/30 16:31:53 by inaranjo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include "AForm.hpp"

class Intern 
{

public:
    Intern();
    Intern( const Intern& src );
    ~Intern();

    Intern& operator=( const Intern& rhs );

    AForm*   makeForm( std::string name, std::string target );
};

#endif 