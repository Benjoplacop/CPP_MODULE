/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhennequ <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 14:33:44 by bhennequ          #+#    #+#             */
/*   Updated: 2023/10/06 14:33:45 by bhennequ         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "WrongAnimal constructor called !" << std::endl;
    this->_type = "WrongAnimal";
}

WrongAnimal::WrongAnimal(WrongAnimal &copy)
{
    std::cout << "WrongAnimal copy constructor called !" << std::endl;
    *this = copy;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal destructor called !" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& src)
{
    std::cout << "WrongAnimal operator called !" << std::endl;
    this->_type = src._type;
    return *this;
}

void    WrongAnimal::makeSound() const
{
    std::cout << "I'm WrongAnimal and i make a wrong sound" << std::endl;
}

std::string WrongAnimal::getType() const
{
    return _type;
}