/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inaranjo <inaranjo <inaranjo@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 17:28:05 by inaranjo          #+#    #+#             */
/*   Updated: 2024/02/01 10:02:51 by inaranjo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include <ctime>

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
        std::cout << "A\n";
    else if (dynamic_cast<B*>(p))
        std::cout << "B\n";
    else if (dynamic_cast<C*>(p))
        std::cout << "C\n";
}

/*PERMET L IDENTIFICATION D UN OBJ, PTR VS REF / PTR = NULL / REF = NE PEUT PAS ETRE NULL*/
void identify(Base& p)
{
    if (dynamic_cast<A*>(&p))
        std::cout << "A\n";
    else if (dynamic_cast<B*>(&p))
        std::cout << "B\n";
    else if (dynamic_cast<C*>(&p))
        std::cout << "C\n";
}

int main()
{
    Base *ptr = generate();
    identify(ptr);
    identify(*ptr);
    delete ptr;
    return 0;
}
