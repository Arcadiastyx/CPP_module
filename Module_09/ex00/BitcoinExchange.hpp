/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inaranjo <inaranjo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 13:35:06 by inaranjo          #+#    #+#             */
/*   Updated: 2024/02/13 12:35:08 by inaranjo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <map>

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

class BitcoinExchange
{
    private:
        std::map<std::string, double> _Brates;
        double GetExchangeRate(const std::string& date);
        bool   CheckDate(const std::string& date);
        bool   CheckValue(const double& value);
        
        BitcoinExchange();
         
    public:
        BitcoinExchange(const std::string& filename);
        BitcoinExchange(const BitcoinExchange& cpy);
        ~BitcoinExchange();
        BitcoinExchange& operator=(const BitcoinExchange& rhs);

       
        void   ReadInput(const std::string &filename);
    
};


#endif