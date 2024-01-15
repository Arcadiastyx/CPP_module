/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inaranjo <inaranjo <inaranjo@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 10:14:18 by inaranjo          #+#    #+#             */
/*   Updated: 2024/01/15 12:06:44 by inaranjo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
#include <string>

class Harl {
private:
    void _debug();
    void _info();
    void _warning();
    void _error();

    typedef void (Harl::*ComplaintFunction)(); // Définir un type de pointeur de fonction membre

    ComplaintFunction complaintFunctions[4]; // Tableau de pointeurs de fonction membres
    std::string complaintLevels[4]; 

public:
    Harl();
    ~Harl();

    void complain(std::string level);
};


#endif  