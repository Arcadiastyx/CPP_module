/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inaranjo <inaranjo <inaranjo@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 12:10:40 by inaranjo          #+#    #+#             */
/*   Updated: 2023/12/08 11:10:35 by inaranjo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cctype>

/*
*****parsing****
- si pas d argumets valeurs alors affiche * LOUD AND UNBEARABLE FEEDBACK NOISE *
- dois etre capable de gerer x nombre d arguments valeurs 
- si arguments alors dois etre afficher en majuscule 

***attention*** 
- affiche en majuscule 
- gerer les espaces de chaque arguments 
- dois finir par un retour a la ligne 
*/

int main(int ac, char **av)
{
    if(ac < 2)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE * " << std::endl; 

    for(int i = 1; i < ac; i++)
    {
        std::string word = av[i];
        for(size_t j = 0; j < word.length(); j++)
            std::cout << (char)std::toupper(word[j]); 
        if(i < ac -1)
            std::cout << " ";
    }
    std::cout << std::endl;
    return 0;
}





















/*int main(int ac, char **av)
{
    if (ac < 2)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    }
    else
    {
        for (int ic = 1; ic < ac; ic++)
        {
            std::string word = std::string(av[ic]);
            for (size_t iv = 0; iv < word.length(); iv++)
            {
                std::cout << (char)std::toupper(word[iv]);
            }
            if (ic < ac - 1)
            {
                std::cout << " "; // Ajoute un espace entre les mots
            }
        }
        std::cout << std::endl;
    }
    return 0;
}
*/

