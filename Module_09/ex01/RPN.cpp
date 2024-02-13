/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inaranjo <inaranjo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 14:16:33 by inaranjo          #+#    #+#             */
/*   Updated: 2024/02/13 16:27:15 by inaranjo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN() {}

/*definie a c un operator*/
bool RPN::isOperator(const char& c) const
{
    return c == '+' || c == '-' || c == '*' || c == '/';
}

/*push un interger dans la stack*/
void RPN::pushOperand(int operand)
{
    stack.push(operand);
}

/*permet d appliquer les operations aux deux elements superieur de la stack
    1. Verifie qu il y ai au mois 2 element dans la pile
    2. int b = stack.top(); stack.pop(); retire le nombre en haut de la pile (le plus récent) et le stocke dans b.
    3. int a = stack.top(); stack.pop(); retire le prochain nombre en haut de la pile (le deuxième plus récent) et le stocke dans a.
    4. L'ordre est important ici : dans les expressions RPN, le deuxième opérande dépile (dans ce cas b) s'applique à l'opérateur après le premier opérande dépile (a).
    5. Empiler le résultat: Le résultat de l'opération est ensuite remis sur la pile pour être utilisé dans les calculs ultérieurs de l'expression.
    ------------------------------------------------------------------------------------------------------------------------------------------------
    ex:
    État initial de la pile: [3, 4, 5]
    Dépiler b (5): La pile devient [3, 4].
    Dépiler a (4): La pile devient [3].
    Multiplier a et b: 4 * 5 = 20.
    Empiler le résultat (20): La pile devient [3, 20]
    ------------------------------------------------------
    top = utilisée pour accéder à l'élément qui se trouve au sommet de la pile
    pop = Retrait d'un élément 
*/
void RPN::applyOperator(char op)
{
    if (stack.size() < 2)
    {
        std::cerr << "Error: Invalid expression." << std::endl;
        exit(EXIT_FAILURE);
    }
    int b = stack.top(); stack.pop();
    int a = stack.top(); stack.pop();
    stack.push(performOperation(a, b, op));
}

/*fais une operation quand tu recontre l operator souhaites*/
int RPN::performOperation(int a, int b, char op) const
{
    switch(op)
    {
        case '+': return a + b;
        case '-': return a - b;
        case '*': return a * b;
        case '/': 
            if (b == 0)
            {
                std::cerr << "Error: Division by zero." << std::endl;
                exit(EXIT_FAILURE);
            }
            return a / b;
        default: 
            std::cerr << "Error: Unknown operation." << std::endl;
            exit(EXIT_FAILURE);
    }
}

/*
    1. istringstream est utilisé pour parcourir l'expression (arugment)fournie sous forme de chaîne de caractères (std::string).
         L'objectif est de lire a la suite chaque token (nombre ou opérateur) de l'arguement.
    2. nettoyage de la stack pour s arrurer quelle commence a vide 
    3. Si le token est un opérateur (identifié par isOperator(token[0]) et ayant une taille de 1 caractère),
       l'opération correspondante est appliquée aux deux derniers nombres de la pile à l'aide de la fonction applyOperator(token[0]).
    4. Si le token est un nombre, il est converti en entier avec std::stoi(token) et empilé sur la pile par la fonction pushOperand.
    5. Après avoir traité tous les tokens, la fonction vérifie si la pile contient exactement un élément
*/
int RPN::evaluate(const std::string& expression)
{
    std::istringstream tokens(expression);
    std::string token;
    
    while (!stack.empty()) stack.pop();

    while (tokens >> token)
    {
        if (token.size() == 1 && isOperator(token[0]))
            applyOperator(token[0]);
        else
            pushOperand(std::stoi(token));
    }

    if (stack.size() != 1)
    {
        std::cerr << "Error: Invalid expression." << std::endl;
        exit(EXIT_FAILURE);
    }
    return stack.top();
}