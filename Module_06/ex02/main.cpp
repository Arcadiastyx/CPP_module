/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inaranjo <inaranjo <inaranjo@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 17:28:05 by inaranjo          #+#    #+#             */
/*   Updated: 2024/02/01 10:25:29 by inaranjo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include <ctime>

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

/*CLASS PRICIPALE*/
class Base 
{
    public:
        virtual ~Base() {}
};

/*CLASS HERITAGE DE LA PRICIPALE*/
class A : public Base {};
class B : public Base {};
class C : public Base {};

/*
    RETURN UNE CLASS HERITAGE DE FACON ALEATOIRE,
    LA SEED TIME ET UTILISEE AFIN DE S ARRURER D AVOIR UN RETOUR RAND A CHAQUE LANCEMENT DU PROG
*/
Base *generate(void)
{
    srand(time(nullptr));
    switch (rand() % 3)
    {
    case 0:
        return new A();
    case 1:
        return new B();
    case 2:
        return new C();
    default:
        return nullptr;
    }
}

/*PERMET L IDENTIFICATION D UN OBJ, COMME C EST UN POINTEUR D HERITAGE DYNAMIQUE CAST ET UTILISE*/
void identify(Base* p)
{
    if (dynamic_cast<A*>(p))
        std::cout << GREEN<< "OBJ :[A]" << RESET << std::endl;
    else if (dynamic_cast<B*>(p))
        std::cout << GREEN << "OBJ :[B]" << RESET << std::endl;
    else if (dynamic_cast<C*>(p))
        std::cout << GREEN << "OBJ:[C]" << RESET << std::endl;
}

/*PERMET L IDENTIFICATION D UN OBJ, PTR VS REF / PTR = NULL / REF = NE PEUT PAS ETRE NULL*/
void identify(Base& p)
{
    if (dynamic_cast<A*>(&p))
        std::cout << LIGHT_CYAN << "OBJ :[A]" << RESET << std::endl;
    else if (dynamic_cast<B*>(&p))
        std::cout << LIGHT_CYAN << "OBJ :[B]" << RESET << std::endl;
    else if (dynamic_cast<C*>(&p))
        std::cout << LIGHT_CYAN << "OBJ:[C]" << RESET << std::endl;
}

int main()
{
    char input;
    do
    {
        Base *ptr = generate();
        identify(ptr);
        identify(*ptr);
        delete ptr;

        std::cout << YELLOW << "[Appuyez sur 'g' pour générer un nouvel objet, ou n'importe quelle autre touche pour quitter]" << RESET << std::endl;
        std::cin >>input; 
    } while (input == 'g');

    return 0;
}