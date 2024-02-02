/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhennequ <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 14:32:24 by bhennequ          #+#    #+#             */
/*   Updated: 2023/10/04 14:32:25 by bhennequ         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal()
{
    std::cout << "AAnimal constructor called !" << std::endl;
    this->_type = "AAnimal ";
}

AAnimal::AAnimal(std::string type)
{
    std::cout << "AAnimal constructor called !" << std::endl;
    this->_type = type;
}

AAnimal::AAnimal(AAnimal &copy)
{
    std::cout << "AAnimal copy constructor called !" << std::endl;
    this->_type = copy.getType();
}

AAnimal::~AAnimal()
{
    std::cout << "AAnimal destructor called !" << std::endl;
}

AAnimal& AAnimal::operator=(const AAnimal& src)
{
    std::cout << "AAnimal operator called !" << std::endl;
    this->_type = src._type;
    return *this;
}

std::string AAnimal::getType() const
{
    return this->_type;
}