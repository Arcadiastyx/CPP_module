/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inaranjo <inaranjo <inaranjo@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 15:42:17 by inaranjo          #+#    #+#             */
/*   Updated: 2024/01/02 16:04:26 by inaranjo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

/* -GET = prend la valeur depuis...- */

std::string Contact::get_first_name()
{
    return(this->_first_name);
}

std::string Contact::get_last_name()
{
    return(this->_last_name);
}

std::string Contact::get_nick_name()
{
    return(this->_nicke_name);
}

std::string Contact::get_phone_number()
{
    return(this->_phone_number);
}

/* -SET = donne la valeur à...*/
void    Contact::set_first_name(std::string firstname)
{
	this->_first_name = firstname;
}

void    Contact::set_last_name(std::string lastname)
{
    this->_last_name = lastname;
}

void    Contact::set_nick_name(std::string nickname)
{
    this->_nicke_name = nickname;
}

void Contact::set_phone_number(std::string phonenumber)
{
    this->_phone_number = phonenumber;
}

