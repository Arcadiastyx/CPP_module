/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inaranjo <inaranjo <inaranjo@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 09:12:13 by inaranjo          #+#    #+#             */
/*   Updated: 2024/02/19 12:04:27 by inaranjo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe(std::vector<int> & input, int size) : _vector(input), _deque(input.begin(), input.end()), _size(size)
{
	this->_vecSort();
	this->_dequeSort();
}

PmergeMe::PmergeMe(PmergeMe const &src) : _size(src._size) 
{
	this->_vector = src._vector;
	this->_deque = src._deque;
	*this = src;
}

PmergeMe::~PmergeMe() {}

PmergeMe &	PmergeMe::operator=(PmergeMe const &rhs) 
{
	if (this != &rhs) 
    {
		this->_vector = rhs._vector;
		this->_deque = rhs._deque;
	}
	return *this;
}


/* Contenaire : vector
-Flexibilité pour stocker une séquence dynamique d'éléments :
    Le conteneur std::vector permet de stocker une séquence dynamique d'entiers, ce qui est essentiel pour manipuler une séquence d'entiers fournie en argument.
-Simplicité d'utilisation : 
    std::vector offre une interface simple et facile à utiliser pour ajouter, supprimer et accéder aux éléments de la séquence.
-Compatibilité avec l'algorithme de tri Ford-Johnson :
    std::vector peut être utilisé efficacement pour stocker la séquence d'entiers et appliquer l'algorithme de tri sur cette séquence.
-Performances raisonnables : 
    Pour de nombreuses tailles de séquences, les performances de std::vector sont acceptables pour l'implémentation de l'algorithme de tri Ford-Johnson. 
    Il offre un accès aléatoire efficace, ce qui est important pour l'algorithme de tri.

---------------------------------------------------------------------------------------------
1. variable start ->Mesure du temps de début de l'opération de tri(clock() retourne le nombre de cycles d'horloge écoulés depuis le début du programme)
2. variable half_size -> contient la taille du vector / 2
3. pointe vers le début du vecteur, pointe vers la position à mi-chemin entre le début et la fin du vecteur
4. pointe vers la position à mi-chemin entre le début et la fin du vecteur, pointe vers la fin du vecteur
5. init 2 iterteur pour le contenaire first half et un autre pour second half
6. sorte dans l ordre croissant 1 et 2 
7. fusionne les deux vector + trie le 
8. fin du temps, calcul la duree en microsecondes + affiche
-------------------------------------------------------------
gestion de paire et impaire : 
 - half_size est calculé comme la taille du vecteur divisée par deux, et en C++, la division d'entiers arrondit toujours vers le bas.

*/

void	PmergeMe::_vecSort() 
{
	clock_t start = clock();
	
	size_t const				half_size = this->_vector.size() / 2;
	std::vector<int>			first_half(this->_vector.begin(), this->_vector.begin() + half_size);
	std::vector<int>			second_half(this->_vector.begin() + half_size, this->_vector.end());

	std::vector<int>::iterator	it;
	std::vector<int>::iterator	ite;

	std::sort(first_half.begin(), first_half.end());
	std::sort(second_half.begin(), second_half.end());

	first_half.insert(first_half.end(), second_half.begin(), second_half.end());

	std::sort(first_half.begin(),first_half.end());
	
	std::cout << "After: ";
	for (it = first_half.begin(), ite = first_half.end(); it != ite; it++)
		std::cout << " " << *it;
	std::cout << std::endl;

	clock_t end = clock();
    double duration = (double)(end - start) / CLOCKS_PER_SEC * 1000000;
    std::cout << "Time to process a range of " << this->_size << " elements with std::vector<int> : " << duration << " us" << std::endl;
}


/* Conteneur deQue : 
- Double-ended" signifie qu on peu ajouter ou supprimer des éléments à la fois au début et à la fin de la file.
- "Queue" fait référence à une structure de données de type file, 
   où les éléments sont ajoutés à l'arrière (queue) et retirés à l'avant (front),
   suivant le principe du "premier entré, premier sorti" (FIFO).
-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
1. init le stocakge du debut du temps d execution du programe 
2. init 2x iterateur begin et end
3. on divise le conteneur / 2
4. on cree deux sous conteneur
5. on rempli les sous conteneur
6. on les sort en ordre croissant
7. on lees fusionne
8. on les sort une fois fusionner 
9. on stock la fin de la dureee d exc du programme + cacul en microsecond + afficahgee
------------------------------------------------------------------------------------------ 
bien que chaque bloc de stockage interne soit contigu, les blocs eux-mêmes ne sont pas nécessairement adjacents en mémoire
contrairement au vector la recheche des data se fera plus lentement car les adresse memoire ne sont pas cote a cote 
*/

void PmergeMe::_dequeSort() 
{
    clock_t start = clock();
    
    std::deque<int>::iterator it = this->_deque.begin();
    std::deque<int>::iterator ite = this->_deque.end();

    size_t const half_size = this->_deque.size() / 2;
    std::deque<int> first_half;
    std::deque<int> second_half;

    for (size_t i = 0; i < half_size; i++) {
        first_half.push_back(*it);
        it++;
    }
    for (; it != ite; it++)
        second_half.push_back(*it);

    std::sort(first_half.begin(), first_half.end());
    std::sort(second_half.begin(), second_half.end());

    first_half.insert(first_half.end(), second_half.begin(), second_half.end());

    std::sort(first_half.begin(), first_half.end());

    clock_t end = clock();
    double duration = (double)(end - start) / CLOCKS_PER_SEC * 1000000;
    std::cout << "Time to process a range of " << this->_size << " elements with std::deque<int> : " << duration << " us" << std::endl;
}
