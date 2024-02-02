/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhennequ <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 14:32:24 by bhennequ          #+#    #+#             */
/*   Updated: 2023/10/04 14:32:25 by bhennequ         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Animal constructor called !" << std::endl;
    this->_type = "Animal ";
}

Animal::Animal(std::string type)
{
    std::cout << "Animal constructor copy called !" << std::endl;
    this->_type = type;
}

Animal::Animal(Animal &copy)
{
    std::cout << "Animal copy constructor called !" << std::endl;
    this->_type = copy.getType();
}

Animal::~Animal()
{
    std::cout << "Animal destructor called !" << std::endl;
}

Animal& Animal::operator=(const Animal& src)
{
    std::cout << "Animal operator called !" << std::endl;
    this->_type = src._type;
    return *this;
}

void    Animal::makeSound() const
{
    std::cout << "I'm animal and i make sound hihi !" << std::endl;
}

std::string Animal::getType() const
{
    return this->_type;
}