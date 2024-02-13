/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inaranjo <inaranjo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 13:36:43 by inaranjo          #+#    #+#             */
/*   Updated: 2024/02/13 13:54:54 by inaranjo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int argc, char* argv[])
{
    
    if (argc != 2)
    {
        std::cout << "Error: could not open file." << std::endl;
        std::cerr << RED << "Usage: " << argv[0] << " <input_file>" << RESET <<std::endl;
        return 1;
    }

    BitcoinExchange exchange("data.csv");
    exchange.ReadInput(argv[1]);

    return 0;
}