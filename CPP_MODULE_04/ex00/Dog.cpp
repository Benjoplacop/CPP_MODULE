/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhennequ <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 14:53:41 by bhennequ          #+#    #+#             */
/*   Updated: 2023/10/04 14:53:43 by bhennequ         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Dog constructor called !" << std::endl;
    this->_type = "Dog";
}

Dog::Dog(Dog &copy): Animal(copy)
{
    std::cout << "Dog copy constructor called !" << std::endl;
}

Dog::~Dog()
{
    std::cout << "Dog destructor called !" << std::endl;
}

Dog& Dog::operator=(const Dog& src)
{
    std::cout << "Dog operator called !" << std::endl;
    this->_type = src._type;
    return *this;
}

void    Dog::makeSound() const
{
    std::cout << "Wouaffffff !" << std::endl;
}

std::string Dog::getType()
{
    return this->_type;
}