/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inaranjo <inaranjo <inaranjo@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 10:12:28 by inaranjo          #+#    #+#             */
/*   Updated: 2024/01/29 10:16:30 by inaranjo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREACRAT_HPP

#include <iostream>

class Bureaucrat
{
    private: 

    public:
        Bureaucrat();
        Bureaucrat(const Bureaucrat &cpy);
        ~Bureaucrat();
        Bureaucrat &operator=(const Bureaucrat &rhs);
};



#endif