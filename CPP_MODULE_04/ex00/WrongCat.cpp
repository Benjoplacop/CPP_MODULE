/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhennequ <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 14:34:07 by bhennequ          #+#    #+#             */
/*   Updated: 2023/10/06 14:34:07 by bhennequ         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    std::cout << "WrongCat constructor called !" << std::endl;
    this->_type = "WrongCat";
}

WrongCat::WrongCat(WrongCat &copy)
{
    std::cout << "WrongCat copy constructor called !" << std::endl;
    *this = copy;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat destructor called !" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& src)
{
    std::cout << "WrongCat operator called !" << std::endl;
    this->_type = src._type;
    return *this;
}

void    WrongCat::makeSound() const
{
    std::cout << "I'm WrongCat and i make a Meowwwwww !" << std::endl;
}

std::string WrongCat::getType() const
{
    return _type;
}
