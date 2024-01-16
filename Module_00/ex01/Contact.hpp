/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inaranjo <inaranjo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 14:40:20 by inaranjo          #+#    #+#             */
/*   Updated: 2024/01/16 14:53:37 by inaranjo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>

class Contact
{
    private:// <-attributs(variables) privé de la classe, stock les infos sur les contacts
        std::string     _first_name;
        std::string     _last_name;
        std::string     _nicke_name;
        std::string     _phone_number; // sont encapsulé comme privé pour empêcher un accès direct deuis l'extérieur de la classe.
        std::string     _dark_secret;
    public: 
        Contact(){}; // constructeur () = par défaut {} = corps du constructeur ( on peu y ajouter du code)
        ~Contact(){}; // destructeur 
        std::string     get_first_name();
        std::string     get_last_name();
        std::string     get_nick_name();
        std::string     get_phone_number(); // <-fonction membres pub. pour récupérer les valeurs des attributs privé
        std::string     get_dark_secret();

        void            set_first_name(std::string firstname);
        void            set_last_name(std::string lastname);
        void            set_nick_name(std::string nickname);
        void            set_phone_number(std::string phonenumber); // <-fonction membres pub. pour attribué  les valeurs des attributs pribés.  
        void            set_dark_secret(std::string dark);
};


#endif