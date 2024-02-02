/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhennequ <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 13:10:11 by bhennequ          #+#    #+#             */
/*   Updated: 2023/09/18 11:56:05 by bhennequ         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include <vector>
#include "Contact.hpp"
#include <iostream>
#include <ostream>
#include <iomanip>
#include <stdexcept>
#include <string>
#include <cstdlib>

class	PhoneBook {
	private:
			Contact	contacts[8];
			int	index;
	
	public:
			PhoneBook();
			void	search(Contact contacts[8]);
			void	add(Contact contacts[8]);
};

#endif
