/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inaranjo <inaranjo <inaranjo@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 01:36:01 by inaranjo          #+#    #+#             */
/*   Updated: 2024/01/04 15:33:53 by inaranjo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

Phonebook::Phonebook(){_max_data = 0;_index = 0;};

void ft_menu()
{
    std::cout << "+-------------------------------------+" << std::endl;
    std::cout << "|          My Awesome Phonebook       |" << std::endl;
    std::cout << "+-------------------------------------+" << std::endl;
    std::cout << "|            1. ADD                   |" << std::endl;
    std::cout << "|            2. SEARCH                |" << std::endl;
    std::cout << "|            3. EXIT                  |" << std::endl;
    std::cout << "+-------------------------------------+" << std::endl;
}

void    Phonebook:: get_user_data()
{
    Contact tmp; //<- donne acces à la classe Contact

    std::cout << "First name : "; // <-affiche 
    getline(std::cin, _firstname); // <-prend les infos de la consol input fournis par l user
    tmp.set_first_name(_firstname); //<-prend tmp la valeur fournis par l user et la stock dans la var de la class contact
    std::cout << "Last name : ";
    getline(std::cin,_lastname); 
    tmp.set_last_name(_lastname);
    std::cout << "Nick name : ";
    getline(std::cin, _nickname);
    tmp.set_nick_name(_nickname);
    std::cout << "Phone number ";
    getline(std::cin, _phonenumber);
    tmp.set_phone_number(_phonenumber);


	/*
	- ajoute la data(tmp) à la liste des contacts de l'objet Phonebook.
	- l'opération _max_data % 8 permet de déterminer l'indice de l'emplacement où
		 le contact sera stocké dans le tableau _contacts.
	Elle utilise le modulo (%) pour assurer que l'indice reste compris entre 0 et 7
	*/
    this->_contact[_max_data % 8] = tmp;
	this->_max_data++; // <-est incrémenté pour suivre le nombre total de contacts dans l'annuaire téléphonique.
	if (this->_max_data <= 8) // <-cette condition vérifie si le nombre total de contacts est inférieur ou égal à 8.
		this->_index = this->_max_data; // <-si c'est le cas, _index est mis à jour pour refléter le nombre actuel de contacts, car vous n'affichez que les 8 derniers contacts ajoutés.
	std::cout << "\e[1;32m" << "CONTACT ADDED SUCCESSFULY" << "\e[0m" << std::endl;
    
}

std::string	ft_max_char(std::string str)
{
	if (str.length() > 9)
	{
		str.erase(str.begin() + 8, str.end());
		str.append(".");
	}
	return (str);
}



/*

initialise l'affichage du tableau de contacts en affichant la première ligne du tableau,

----------------------------------------------------------------------------------------------

Cette boucle for itère à travers les contacts stockés dans le tableau _contact. 
La variable i est utilisée comme indice pour accéder à chaque contact dans le tableau.
La condition i < (int)this->_index assure que la boucle ne dépasse pas le nombre de contacts réels stockés dans le tableau.

----------------------------------------------------------------------------------------------

À l'intérieur de la boucle, cette partie du code affiche chaque ligne de contact dans un format tabulaire.
Chaque colonne est alignée à l'aide de la fonction std::setw(10) pour définir une largeur fixe de 10 caractères pour chaque champ.
Les données du contact sont extraites à partir des méthodes get de la classe Contact (par exemple, get_first_name()) et affichées à l'écran.

info : setw (stream width) 
setw est une fonction qui permet de contrôler la largeur d'affichage des données 
lors de l'utilisation de l'opérateur << pour l'affichage dans C++,
ce qui est utile pour formater la sortie textuelle de manière lisible et alignée.

*/
void	Phonebook::ft_show_contacts()
{
	std::cout << "|     INDEX|FIRST NAME| LAST NAME|  NICKNAME| PHONENUMBER\n";
	for (int i = 0; i < (int)this->_index; i++)
	{
		std::cout
		<< "|" << std::setw(10) << i
		<< "|" << std::setw(10) << ft_max_char(_contact[i].get_first_name())
		<< "|" << std::setw(10) << ft_max_char(_contact[i].get_last_name())
		<< "|" << std::setw(10) << ft_max_char(_contact[i].get_nick_name()) 
		<< "|" << std::setw(10) << ft_max_char(_contact[i].get_phone_number()) << "|"
		<< std::endl;
	}
}

/*
Déclare une variable index de type unsigned int pour stocker l'index saisi par l'utilisateur.
Appelle la fonction ft_show_contacts() pour afficher la liste des contacts disponibles à l'utilisateur.
Demande à l'utilisateur de saisir un index en affichant le message "Enter The index: ".
Vérifie si la saisie de l'utilisateur a échoué en utilisant std::cin.fail(). Si cela se produit, cela signifie que l'entrée n'est pas un entier valide.
Si la saisie échoue, affiche un message d'erreur en rouge indiquant "INDEX INVALID !" et réinitialise la couleur de la console avec "\e[0m".
Si la saisie est valide, continue à l'étape suivante.
Vérifie si l'index saisi par l'utilisateur est inférieur à la valeur de _index, qui représente le nombre de contacts stockés.
Si l'index est valide, affiche les détails du contact correspondant, y compris le prénom, le nom de famille, le surnom et le numéro de téléphone à l'aide des méthodes get de la classe Contact.
Si l'index est invalide (supérieur ou égal à _index), affiche un message d'erreur en rouge indiquant "INDEX INVALID !".
Nettoie le flux d'entrée avec std::cin.clear() pour effacer tout drapeau d'erreur éventuel.
Ignore les caractères restants dans le flux d'entrée jusqu'à la fin de la ligne avec std::cin.ignore(INT_MAX, '\n') pour éviter les problèmes de saisie future.

*/
void	Phonebook::ft_search()
{
	unsigned int index;
	ft_show_contacts();
	std::cout << "Enter The index: ";
	std::cin >> index;
	if (std::cin.fail())
		std::cout << "\e[1;91m" << "INDEX INVALID !\n" << "\e[0m";
	else
	{
		if (index < this->_index)
		{
			std::cout << "First Name: " << this->_contact[index].get_first_name() << std::endl;
			std::cout << "Last Name: " << this->_contact[index].get_last_name() << std::endl;
			std::cout << "NickeName: " << this->_contact[index].get_nick_name() << std::endl;
			std::cout << "Phone Number: " << this->_contact[index].get_phone_number() << std::endl;
		}
		else
			std::cout << "\e[1;91m" << "INDEX INVALID !\n" << "\e[0m";
	}
	std::cin.clear();
	std::cin.ignore(INT_MAX, '\n');
}

int main()
{
    Phonebook Phonebook;
    std::string command;

    ft_menu();
    while (42)
    {
        std::cout << "(o.o)> ";
        getline(std::cin, command);
        if (command == "ADD")
            Phonebook.get_user_data();
        else if (command == "SEARCH")
			Phonebook.ft_search();
        else if (command == "EXIT")
		{
			std::cout << "GOOD BYE" << std::endl;
			break;
		}
        else
        {
            std::cout << "\e[1;91m" << "COMMAND NOT FOUND!" << "\e[0m" << std::endl;
        }
    }
}