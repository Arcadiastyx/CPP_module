/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inaranjo <inaranjo <inaranjo@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 16:51:23 by inaranjo          #+#    #+#             */
/*   Updated: 2024/01/11 19:31:18 by inaranjo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

#include "Sed.hpp"
#include <fstream>
#include <iostream>

Sed::Sed(const std::string& filename, const std::string& s1, const std::string& s2)
    : _filename(filename), _s1(s1), _s2(s2) {}

Sed::~Sed() {}

void Sed::replace() {
    std::ifstream inFile(_filename);
    if (!inFile) {
        std::cerr << "Unable to open file: " + _filename << std::endl;
        return;
    }

    std::ofstream outFile(_filename + ".replace");
    if (!outFile) {
        std::cerr << "Unable to create output file" << std::endl;
        return;
    }

    std::string line;
    while (getline(inFile, line)) {
        size_t pos = 0;
        while ((pos = line.find(_s1, pos)) != std::string::npos) {
            line.erase(pos, _s1.length());
            line.insert(pos, _s2);
            pos += _s2.length();
        }
        outFile << line << std::endl;
    }
}
