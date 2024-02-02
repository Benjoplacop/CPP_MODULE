/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhennequ <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 13:10:02 by bhennequ          #+#    #+#             */
/*   Updated: 2023/09/18 11:55:53 by bhennequ         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <string>

PhoneBook::PhoneBook()
{
	index = 0;
}

void	PhoneBook::add(Contact contacts[8])
{
	Contact 	newContact;
	std::string	str;
	
	if (index == 8)
		index = 0;
	std::cout << "Enter information of new Contact" << std::endl;
	std::cout << "First Name: ";
	std::getline(std::cin, str);
	newContact.set_fname(str);
	std::cout << std::endl;
	std::cout << "Last Name: ";
	std::getline(std::cin, str);
	newContact.set_lname(str);
	std::cout << std::endl;
	std::cout << "Nickname: ";
	std::getline(std::cin, str);
	newContact.set_nick(str);
	std::cout << std::endl;
	std::cout << "Phone Number: ";
	std::getline(std::cin, str);
	newContact.set_phone_num(str);
	std::cout << std::endl;
	std::cout << "Darkest Secret: ";
	std::getline(std::cin, str);
	newContact.set_secret(str);
	std::cout << std::endl;
	contacts[index] = newContact;
	index++;

}

void	PhoneBook::search(Contact contacts[8])
{
	std::cout << std::setw(20) << std::left << "Last Name: ";
    std::cout << std::setw(20) << std::left << "First Name: ";
    std::cout << std::setw(20) << std::left << "Nickname: ";
	std::cout << std::setw(20) << std::left << "Phone Number: " << std::endl;
	std::cout << std::endl;

	int	i = 0;
	while (i < 8)
	{
		std::cout << std::setw(20) << std::left << contacts[i].get_fname();
    	std::cout << std::setw(20) << std::left << contacts[i].get_lname();
    	std::cout << std::setw(20) << std::left << contacts[i].get_nickname(); 
   		std::cout << std::setw(20) << std::left << contacts[i].get_phone_num() << std::endl;
		i++;
	}

	std::string str;
	std::cout << "Choose a Index of Contact !" << std::endl;
	std::getline(std::cin , str);
	int	index;

	try {
		index  = atoi(str.c_str());
		if ((index >= 0 && index < 8) && !contacts[index].get_fname().empty())
		{
			std::cout << std::endl;
			std::cout << "Contact Information: " << std::endl;
       		std::cout << "Last Name: " << contacts[index].get_lname()<< std::endl;
        	std::cout << "First Name: " << contacts[index].get_fname() << std::endl;
        	std::cout << "Nickname: " << contacts[index].get_nickname() << std::endl;
        	std::cout << "Phone Number: " << contacts[index].get_phone_num() << std::endl;
        	std::cout << "Darkest Secret: " << contacts[index].get_dark_secret()<< std::endl;
			std::cout << std::endl;
		}
		else
			std::cout << "Invalid index of Contacts !" << std::endl;
	} catch (const std::invalid_argument& e) {
		std::cout << "Invalid input. Please enter a valind index." << std::endl;
	}
}
