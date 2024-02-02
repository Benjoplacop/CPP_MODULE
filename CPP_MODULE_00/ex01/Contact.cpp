/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhennequ <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 12:48:50 by bhennequ          #+#    #+#             */
/*   Updated: 2023/09/18 11:56:34 by bhennequ         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void)
{
    firstName = "";
    lastName = "";
    nickName = "";
    phoneNumber = "";
    darkestSecret = "";
}

std::string Contact::get_fname(void) const
{
    return (this->firstName);
}

std::string Contact::get_lname(void) const
{
    return (this->lastName);
}

std::string Contact::get_nickname(void) const
{
    return (this->nickName);
}

std::string Contact::get_phone_num(void) const
{
    return (this->phoneNumber);
}

std::string Contact::get_dark_secret(void) const
{
    return (this->darkestSecret);
}

void	Contact::set_fname(std::string str)
{
	this->firstName = str;
}

void	Contact::set_lname(std::string str)
{
	this->lastName = str;
}

void	Contact::set_nick(std::string str)
{
	this->nickName = str;
}

void	Contact::set_phone_num(std::string str)
{
	this->phoneNumber = str;
}

void	Contact::set_secret(std::string str)
{
	this->darkestSecret = str;
}
