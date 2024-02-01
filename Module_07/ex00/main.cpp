/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inaranjo <inaranjo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 13:42:42 by inaranjo          #+#    #+#             */
/*   Updated: 2024/02/01 13:54:39 by inaranjo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Whatever.hpp"

/*
    L'utilisation de templates pour les fonctions :
    swap, min et max permet à ces fonctions d'être utilisées avec n'importe quel type de données
    qui supporte les opérations de comparaison et d'affectation,
    sans avoir besoin de réécrire la fonction pour chaque type de données spécifique.
    Cela rend ces fonctions extrêmement polyvalentes et réutilisables dans différents contextes et avec différents types de données.
*/

int main() 
{
    int a = 2;
    int b = 3;
    swap( a, b );
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
    std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
    std::string c = "chaine1";
    std::string d = "chaine2";
    swap(c, d);
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
    std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

    return 0;
}