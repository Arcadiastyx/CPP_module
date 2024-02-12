/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inaranjo <inaranjo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 13:35:08 by inaranjo          #+#    #+#             */
/*   Updated: 2024/02/12 16:49:46 by inaranjo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

/*
    1.Ouverture du fichier, en fesant attention au caractere null /0, si pas ouver err
    2.On cree une variable line pour stocker la premier ligne du fichier, qui sera ingoree, le curseur commencera donc a 2eme ligne
    3.(Boucle)> size_type permet de representer la taille de la chaine + la posiiton au d un element au sein de la chaine avec un type no signed
        la on souhaite qu il trouve via find "," dans la ligne (str) et on le stock dans idx_str
        on verifie via npos, pour voir si la sous chaine "," a ete trouve ou non si cette condion et vrai alors err
    4.On stocke dans date et rate_str les sous chaine souhaite du dossier CSV : date = 2009-01-02 et rate_str = x ->(voir CSV)
    5.On declare une variable de type double qui stockera la rate converti de string a double , le type de variable determine la conversion
        grace a istringstream on va pouvoir utilsier le flux pour faire la conversion 
        on cree une nouvelle variable via istringstream et on lui donne en paramettre ce qu on souhaite convertir ici la rate_str du CSV
    6.La ligne rates[date] = rate; 
        ajoute une entrée à la map rates ou met à jour l'entrée existante pour la clé spécifiée (date)
        avec le nouveau taux de change (rate).
        Cela signifie que pour chaque date, nous stockons son taux de change correspondant dans la map.   
*/
BitcoinExchange::BitcoinExchange(const std::string& filename)
{
    std::ifstream file(filename.c_str());
    if (!file.is_open())
    {
        std::cerr << "Error: could not open file " << filename << std::endl;
        return;
    }
    std::string line;
    std::getline(file, line);
    while (std::getline(file, line)) 
    {
        std::string::size_type idx_str= line.find(',');
        if (idx_str == std::string::npos)
        {
            std::cerr << "Error: Invalid format in database => " << line << '\n';
            continue;
        }
        std::string date = line.substr(0, idx_str);
        std::string rate_str = line.substr(idx_str+ 1);

        double rate;
        std::istringstream rate_stream(rate_str);
        if (!(rate_stream >> rate)) 
        {
            std::cerr << "Error: Invalid rate format in database => " << rate_str << '\n';
            continue;
        }
        rates[date] = rate;
    }
}