/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhennequ <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 12:48:56 by bhennequ          #+#    #+#             */
/*   Updated: 2023/06/14 11:49:28 by bhennequ         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <string>
class	Contact {

public : 
		Contact(void);
		//~Contact(void);
		std::string get_fname(void) const;
		std::string get_lname(void) const;
		std::string get_nickname(void) const;
		std::string get_phone_num(void) const;
		std::string get_dark_secret(void) const;
		void		set_fname(std::string str);
		void		set_lname(std::string str);
		void		set_nick(std::string str);
		void		set_phone_num(std::string str);
		void		set_secret(std::string str);

private : 
		std::string firstName;
		std::string lastName;
		std::string nickName;
		std::string phoneNumber;
		std::string darkestSecret;
};

#endif
