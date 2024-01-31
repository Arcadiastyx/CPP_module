/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalerConvert.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inaranjo <inaranjo <inaranjo@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 09:44:42 by inaranjo          #+#    #+#             */
/*   Updated: 2024/01/31 11:40:06 by inaranjo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalerConvert.hpp"

void ScalarConverter::convert(const std::string& literal)
{
    convertToChar(literal);
    convertToInt(literal);
    convertToFloat(literal);
    convertToDouble(literal);
}

void ScalarConverter::convertToChar(const std::string& literal)
{
    try 
    {
        int value = std::stoi(literal);
        std::cout << "char: ";
        if (std::isprint(value))
            std::cout << static_cast<char>(value) << std::endl;
        else
            std::cout << "Non displayable" << std::endl;
    } 
    catch (...) 
    {
        std::cout << "char: impossible" << std::endl;
    }
}

void ScalarConverter::convertToInt(const std::string& literal)
{
    try {
        int value = std::stoi(literal);
        std::cout << "int: " << value << std::endl;
    } catch (...) {
        std::cout << "int: impossible" << std::endl;
    }
}

void ScalarConverter::convertToFloat(const std::string& literal) {
    if (literal == "-inff" || literal == "+inff" || literal == "-inf" || literal == "+inf" || literal == "nan") {
        std::cout << "float: " << literal << "f" << std::endl;
    } else {
        try {
            float value = std::stof(literal);
            std::cout << "float: " << std::fixed << std::setprecision(1) << value << "f" << std::endl;
        } catch (...) {
            std::cout << "float: impossible" << std::endl;
        }
    }
}

void ScalarConverter::convertToDouble(const std::string& literal) {
    if (literal == "-inff" || literal == "+inff" || literal == "-inf" || literal == "+inf" || literal == "nan") {
        std::cout << "double: " << literal << std::endl;
    } else {
        try {
            double value = std::stod(literal);
            std::cout << "double: " << value << std::endl;
        } catch (...) {
            std::cout << "double: impossible" << std::endl;
        }
    }
}
