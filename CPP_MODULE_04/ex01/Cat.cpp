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
#include "Brain.hpp"

Cat::Cat(): Animal("Cat")
{
    std::cout << "Cat constructor called !" << std::endl;
    this->brain = new Brain;
}

Cat::Cat(Cat& copy): Animal(copy)
{
    std::cout << "Cat copy constructor called !" << std::endl;
    this->brain = new Brain(*copy.brain);
}

Cat::~Cat()
{
    delete this->brain;
    std::cout << "Cat destructor called !" << std::endl;
}

Cat& Cat::operator=(const Cat& src)
{
    std::cout << "Cat operator called !" << std::endl;
    this->_type = src._type;
    if (this->brain)
        delete this->brain;
    this->brain = new Brain(*(src.getBrain()));
    return *this;
}

void    Cat::makeSound() const
{
    std::cout << "Meowwwwwww !" << std::endl;
}

std::string Cat::getType() const
{
    return this->_type;
}

Brain   *Cat::getBrain() const
{
    return this->brain;
}

void    Cat::compare(const Cat& other) const
{
    std::cout << "Let's compare 2 cats\nBrain's heep address: " << this->brain << std::endl;
    std::cout << "Other heep address: " << other.getBrain() << std::endl;
    std::cout << "This brain ideas   |   Other brain's ideas\n" << std::endl;
    for (int i = 0; i < 100; i++)
        std::cout << this->brain->getIdeas()[i] << "   |   " << other.getBrain()->getIdeas()[i] << std::endl;
    std::cout << std::endl;    
}
