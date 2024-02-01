/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inaranjo <inaranjo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 17:18:30 by inaranjo          #+#    #+#             */
/*   Updated: 2024/02/01 12:23:58 by inaranjo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
#include <iostream>

/*
    But de l exercice : convertir l ADRESSE MEMOIRE de nos datas en un uintptr_t
        - pour que la convertion se fasse correcetment on doit utiliser [reinterpret_cas] (seule facon de cast des pointeurs)
    
    Pourquoi : 
        - permet la transmission de donees complexes a travers le reseaux
        - permet un optimisation du stockage en cas de contraintes de memoires 
        - permet de masquer ou modifier les addresses reeles , securite optimise
        - permet de gerer des pointeurs de maniere generique en cas de differents types de donnee
*/


int main()
{
    std::cout << std::endl;

    Data myData = {42, "Hello, world!"};

    // Affichage des données avant la sérialisation
    std::cout << "[Number:] " << myData.number << std::endl;
    std::cout << "[Text:] " << myData.str << std::endl;

    std::cout << std::endl;
    
    // Affichage de l'adresse mémoire globale de myData
    std::cout << "[Global address of myData:]> " << YELLOW <<&myData << RESET << std::endl;

    std::cout << std::endl;
    
    // Affichage des adresses mémoire des membres de Data
    std::cout << "[Address of myData.number:]> " << YELLOW << &myData.number << RESET<< std::endl;
    std::cout << "[Address of myData.text:]> " << YELLOW << &myData.str << RESET << std::endl;
    
    std::cout << std::endl;
    
    uintptr_t serializedData = Serializer::serialize(&myData);
        std::cout << "[Serialized data:]> " << YELLOW << serializedData << RESET <<std::endl;
    
    Data* deserializedData = Serializer::deserialize(serializedData);
        std::cout << "[Deserialized data address:]> " << YELLOW <<deserializedData << RESET <<std::endl;

    std::cout << std::endl;

    if (deserializedData == &myData)
        std::cout << GREEN << "[SERIALIZATION AND DESERIALIZATION SUCCESSFUL]" << RESET <<std::endl;
    else
        std::cout << RED << "[ERROR IN SERIALIZATION OR DESERIALIZATION]" << RESET <<std::endl;

    std::cout << std::endl;
    
    return 0;
}


