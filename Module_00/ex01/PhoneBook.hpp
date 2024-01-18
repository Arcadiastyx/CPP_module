/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inaranjo <inaranjo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 16:08:09 by inaranjo          #+#    #+#             */
/*   Updated: 2024/01/18 13:40:42 by inaranjo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <string>
#include <iomanip>
#include "Contact.hpp"
#include <climits>

class Phonebook
{
    private:
        Contact _contact[8];
        unsigned int _index; 
        unsigned int _max_data; 
            std::string _firstname;
            std::string _lastname;
            std::string _nickname;
            std::string _phonenumber;
            std::string _darkestSecret;

    public: 
        Phonebook();
        ~Phonebook(){};

        void    ft_menu();
        void    get_user_data();  
        void    ft_show_contacts();
        void    ft_search();

        
};



#endif