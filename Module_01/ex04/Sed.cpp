/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inaranjo <inaranjo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 16:51:23 by inaranjo          #+#    #+#             */
/*   Updated: 2024/01/11 18:22:19 by inaranjo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

Sed::Sed(const std::string& filename, const std::string& s1, const std::string& s2)
    : _filename(filename), _s1(s1), _s2(s2) {}

Sed::~Sed() {}

void Sed::replace()
{
    std::ifstream file_in(_filename);
    if (!file_in) 
    {
        std::cerr << "Cannot open the file: " << _filename << std::endl;
        return;
    }

    std::ofstream file_out(_filename + ".replace");
    if (!file_out)
    {
        std::cerr << "Cannot create the file: " << _filename << ".replace" << std::endl;
        file_in.close();
        return;
    }

    std::string line;
    while (std::getline(file_in, line))
    {
        size_t pos = 0;
        while ((pos = line.find(_s1, pos)) != std::string::npos) {
            line.erase(pos, _s1.length());
            line.insert(pos, _s2);
            pos += _s2.length();
        }
        file_out << line << "\n";
    }
    file_in.close();
    file_out.close();
}
