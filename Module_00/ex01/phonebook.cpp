/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inaranjo <inaranjo <inaranjo@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 01:36:01 by inaranjo          #+#    #+#             */
/*   Updated: 2024/01/02 21:52:49 by inaranjo         ###   ########.fr       */
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