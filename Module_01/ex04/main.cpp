/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inaranjo <inaranjo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 16:08:43 by inaranjo          #+#    #+#             */
/*   Updated: 2024/01/11 16:26:39 by inaranjo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

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
    (void)av;
    
    
    if(ac != 4)
        std::cout << " ERROR : 3 param required -> [filename][str1][str2]" << std::endl;
    else 
    {
        if(av[1] != file)
            exit
        open file;
        copy file
        
    }
    
    return 0;
}