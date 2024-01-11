/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inaranjo <inaranjo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 16:08:43 by inaranjo          #+#    #+#             */
/*   Updated: 2024/01/11 18:22:52 by inaranjo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

/*
    le fichier 1 doit s ouvrir = [filename]
    avec les informations de la string 1 = [filename] + [str1]
    avec la fonction .replace(?)
    les informations de la string 2 sont ovewrite sur le file
    donc au final on a que les info de la string 2 dans le fichier 
    [filename] = [str2]
    
*/

int main(int ac, char **av)
{
    if (ac != 4) {
        std::cerr << "Usage: " << av[0] << " <filename> <string_to_replace> <replacement_string>" << std::endl;
        return 1;
    }
    
    Sed sed(av[1], av[2], av[3]);
    sed.replace();

    
    return 0;
}