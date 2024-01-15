/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inaranjo <inaranjo <inaranjo@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 16:46:07 by inaranjo          #+#    #+#             */
/*   Updated: 2024/01/12 19:13:58 by inaranjo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SED_HPP
#define SED_HPP

#include <iostream>
#include <string>
#include <fstream>

#define VIOLET  "\e[35;1m"
#define RESET	"\e[0m"
#define YELLOW  "\e[93;5;226m"
#define GREEN    "\e[92;5;118m"

class Sed
{
    private:
        std::string _filename;
        std::string _s1;
        std::string _s2;

    public:
    Sed(std::string filename, std::string s1, std::string s2);
    ~Sed();
        void    replace();
};

#endif 