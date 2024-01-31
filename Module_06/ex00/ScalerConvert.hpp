/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalerConvert.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inaranjo <inaranjo <inaranjo@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 09:44:45 by inaranjo          #+#    #+#             */
/*   Updated: 2024/01/31 11:29:12 by inaranjo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALERCONVERT_HPP
#define SCALERCONVERT_HPP

#include <iostream>
#include <string>
#include <cstdlib>
#include <limits>
#include <iomanip>
#include <cctype>

#define YELLOW "\e[93;5;226m"
#define RESET  "\e[0m"
#define GREEN  "\e[92;5;118m"
#define VIOLET "\033[35m"
#define RED "\033[31m"
#define ORANGE "\033[38;5;208m"
#define BLUE "\033[34m"
#define LIGHT_BLUE "\033[36m"
#define LIGHT_CYAN "\033[96m"
#define LIGHT_PURPLE "\033[95m"
#define MAGENTA "\033[35m"
#define LIGHT_ORANGE "\033[38;5;208m"
#define GRAY "\033[90m"

class ScalarConverter
{
    private:
        ScalarConverter(); // constructeur prive, afin d enpecher l instance d etre cree par l user

        static void convertToChar(const std::string& literal);
        static void convertToInt(const std::string& literal);
        static void convertToFloat(const std::string& literal);
        static void convertToDouble(const std::string& literal);


    public:
        /*CANONIQUE FORM
        ScalarConverter(const ScalarConverter& cpy);
        ScalarConverter& operator=(const ScalarConverter&); */
        
        /*METHODE MEMBERS*/
        static void convert(const std::string& literal);

};


#endif