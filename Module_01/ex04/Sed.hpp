/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inaranjo <inaranjo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 16:46:07 by inaranjo          #+#    #+#             */
/*   Updated: 2024/01/11 16:50:50 by inaranjo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SED_HPP
#define SED_HPP

#include <iostream>
#include <string>

class Sed
{
    private:
        std::string _filename;
        std::string _s1;
        std::string _s2;

    public:
    Sed(std::string& filename, std::string& s1, std::string& s2);
    ~Sed();
        void    replace(std::string s1, std::string s2);
};

#endif 