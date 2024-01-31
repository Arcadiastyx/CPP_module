/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalerConvert.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inaranjo <inaranjo <inaranjo@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 09:44:42 by inaranjo          #+#    #+#             */
/*   Updated: 2024/01/31 13:51:50 by inaranjo         ###   ########.fr       */
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

/*
    1.Essaie de convertir la chaîne de caractères en un entier
    2.Vérifie si la valeur entière est imprimable
        si oui : affiche le caractère correspondant à la valeur entière
        si non : affiche "Non displayable"
    3.En cas d'exception (erreur lors de la conversion), affiche "char: impossible"
*/
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

/*
    1.Essaie de convertir la chaîne de caractères en un entier
        si oui : affiche le caractère correspondant à la valeur entière
    3.En cas d'exception (erreur lors de la conversion), affiche "int: impossible"
*/
void ScalarConverter::convertToInt(const std::string& literal)
{
    try 
    {
        int value = std::stoi(literal);
        std::cout << "int: " << value << std::endl;
    } catch (...) 
    {
        std::cout << "int: impossible" << std::endl;
    }
}

/*
    1.gere le cas infinie + affiche en cas de match
    2. autre converti en float avec precision 1 soit 1 chiffre apres la virgule
*/
void ScalarConverter::convertToFloat(const std::string& literal)
{
    if (literal == "-inff" || literal == "+inff" || literal == "-inf" || literal == "+inf" || literal == "nan")
        std::cout << "float: " << literal << "f" << std::endl;
    else 
    {
        try 
        {
            float value = std::stof(literal);
            std::cout << "float: " << std::fixed << std::setprecision(1) << value << "f" << std::endl;
        } catch (...)
        {
            std::cout << "float: impossible" << std::endl;
        }
    }
}

void ScalarConverter::convertToDouble(const std::string& literal)
{
    if (literal == "-inff" || literal == "+inff" || literal == "-inf" || literal == "+inf" || literal == "nan")
        std::cout << "double: " << literal << std::endl;
    else 
    {
        try 
        {
            double value = std::stod(literal);
            std::cout << "double: " << value << std::endl;
        } catch (...)
        {
            std::cout << "double: impossible" << std::endl;
        }
    }
}
