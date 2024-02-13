/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inaranjo <inaranjo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 14:16:35 by inaranjo          #+#    #+#             */
/*   Updated: 2024/02/13 15:13:47 by inaranjo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <string>
#include <stack>
#include <sstream>
#include <iostream>


/*
    Pk la Stack : 
    Stack et adapter a cette exercice car comme le nom l indique (REVERSE polish Nation)
    on va devoir utiliser le concepte de LIFO(Last in, First Out - dernier entre premier sorti) utiliser par la stack
    *les operations sont appliquees aux derniers nombres ajoutes a l expression.
    *l evaluation des arguments se font de GAUCHE A DROITE, en empilant les nombres jusqu un operateur soit trouve
    *efficacite des temps d execution et de complexite d algo, les operations d ajout et suppresion se font en temps constant O(1);
    *facilite des gestions d err: si un operateur est recontre et qu il n y a pas suffisament d operandes dans la pile on peut identifier l erreur rapidement
    
    ex: 
    Expression RPN: 3 4 + 2 * 7 /
    ----------------------------------------------
    - initialisation: La pile est initialement vide:
        Pile: []
    - lecture de 3: Le nombre 3 est lu et empilé:
        Pile: [3]
    - lecture de 4: Le nombre 4 est lu et empilé:
        Pile: [3, 4]
    - lecture de + : L'opérateur + est lu. On dépile deux nombres (4 et 3), on les additionne (résultat = 7), puis on empile le résultat.
        Pile: [7]
    - lecture de 2: Le nombre 2 est lu et empilé:
        Pile: [7, 2]
    - lecture de * : L'opérateur * est lu. On dépile deux nombres (2 et 7), on les multiplie (résultat = 14), puis on empile le résultat.
        Pile: [14]
    - lecture de 7: Le nombre 7 est lu et empilé:
        Pile: [14, 7]
    - lecture de / : L'opérateur / est lu. On dépile deux nombres (7 et 14), on divise le premier par le second (résultat = 2), puis on empile le résultat.
        Pile: [2]
    - Fin de l'expression: L'évaluation est terminée. Le résultat final (2) est au sommet de la pile.
*/      




class RPN
{
    private:
        std::stack<int> stack;
        bool isOperator(const char& c) const;
        void pushOperand(int operand);
        void applyOperator(char op);
        int performOperation(int a, int b, char op) const;


    public:
        RPN();
    //RPN(const RPN& cpy);
    //~RPN();
    //RPN& operator=(const RPN& rhs);
    
    int evaluate(const std::string& expression);
};




#endif