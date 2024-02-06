/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inaranjo <inaranjo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 13:38:53 by inaranjo          #+#    #+#             */
/*   Updated: 2024/02/06 16:55:21 by inaranjo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"


int main() 
{
    Span span(10); // Crée un Span avec une capacité maximale de 10 éléments

    try {
        // Ajoute quelques nombres
        span.addNumber(5);
        span.addNumber(3);
        span.addNumber(17);
        span.addNumber(9);
        span.addNumber(11);

        // Affiche le span le plus court et le plus long
        std::cout << "Le span le plus court: " << span.shortestSpan() << std::endl;
        std::cout << "Le span le plus long: " << span.longestSpan() << std::endl;

        // Ajoute des nombres supplémentaires pour tester
        for (int i = 0; i < 5; ++i) {
            span.addNumber(i * 2); // Ajoute des nombres supplémentaires
        }

        // Tente d'ajouter un nombre au-delà de la capacité maximale pour tester la gestion des exceptions
        span.addNumber(22);

    } catch (const std::exception& e) {
        std::cout << "Exception capturée: " << e.what() << std::endl;
    }

    // Crée un nouveau Span avec une grande capacité et teste avec plus de nombres
    Span largeSpan(10000);
    try {
        for (int i = 0; i < 10000; ++i) {
            largeSpan.addNumber(rand() % 100000); // Ajoute des nombres aléatoires
        }

        std::cout << "Le span le plus court dans largeSpan: " << largeSpan.shortestSpan() << std::endl;
        std::cout << "Le span le plus long dans largeSpan: " << largeSpan.longestSpan() << std::endl;

    } catch (const std::exception& e) {
        std::cout << "Exception capturée lors du test de largeSpan: " << e.what() << std::endl;
    }

    return 0;
}
