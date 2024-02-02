/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhennequ <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 16:30:47 by bhennequ          #+#    #+#             */
/*   Updated: 2023/09/18 11:56:47 by bhennequ         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "PhoneBook.hpp"
#include "Contact.hpp"

int main(void)
{
    std::string str;
	PhoneBook	ph;
	Contact		contacts[8];

    while (str != "EXIT")
    {
        std::cout << "Enter a command ! >> ";
        std::getline(std::cin, str);
		if (str == "ADD")
			ph.add(contacts);
		else if (str == "SEARCH")
			ph.search(contacts);
		else if (str == "EXIT")
			break ;
		else
			std::cout << "Command not valid." << std::endl;
    }
	return (0);
}
