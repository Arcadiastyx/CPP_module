/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inaranjo <inaranjo <inaranjo@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 16:08:09 by inaranjo          #+#    #+#             */
/*   Updated: 2024/01/02 17:54:16 by inaranjo         ###   ########.fr       */
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
        int _index; 
        int _max_data; 
            std::string _firstname;
            std::string _lastname;
            std::string _nickname;
            std::string _phonenumber;

    public: 
        Phonebook(){};
        ~Phonebook(){};

        void    ft_menu();
        void    get_user_data();  
        void    ft_show_contacts();
        void    ft_search();

        
};



#endif