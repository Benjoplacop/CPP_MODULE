/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhennequ <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 14:53:30 by bhennequ          #+#    #+#             */
/*   Updated: 2023/10/04 14:53:32 by bhennequ         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Cat constructor called !" << std::endl;
    this->_type = "Cat";
}

Cat::Cat(Cat& copy): Animal(copy)
{
    std::cout << "Cat copy constructor called !" << std::endl;
}

Cat::~Cat()
{
    std::cout << "Cat destructor called !" << std::endl;
}

Cat& Cat::operator=(const Cat& src)
{
    std::cout << "Cat operator called !" << std::endl;
    this->_type = src._type;
    return *this;
}

void    Cat::makeSound() const
{
    std::cout << "Meowwwwwww !" << std::endl;
}

std::string Cat::getType()
{
    return this->_type;
}
