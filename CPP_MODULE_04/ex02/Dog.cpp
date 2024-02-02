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
#include "Brain.hpp"

Dog::Dog(): AAnimal("Dog")
{
    std::cout << "Dog constructor called !" << std::endl;
    this->brain = new Brain;
}

Dog::Dog(Dog &copy): AAnimal(copy)
{
    std::cout << "Dog copy constructor called !" << std::endl;
    this->brain = new Brain(*copy.brain);
}

Dog::~Dog()
{
    delete this->brain;
    std::cout << "Dog destructor called !" << std::endl;
}

Dog& Dog::operator=(const Dog& src)
{
    std::cout << "Dog operator called !" << std::endl;
    this->_type = src._type;
    if (this->brain)
        delete this->brain;
    this->brain = new Brain;
    return *this;
}

void    Dog::makeSound() const
{
    std::cout << "Wouaffffff !" << std::endl;
}

/*std::string Dog::getType() const
{
    return this->_type;
}*/

Brain* Dog::getBrain() const
{
    return this->brain;
}

void    Dog::compare(const Dog& other) const
{
    std::cout << "Let's compare 2 dogs\nBrain's heep address: " << this->brain << std::endl;
    std::cout << "Other heep address: " << other.getBrain() << std::endl;
    std::cout << "This brain ideas   |   Other brain's ideas\n" << std::endl;
    for (int i = 0; i < 100; i++)
        std::cout << this->brain->getIdeas()[i] << "   |   " << other.getBrain()->getIdeas()[i] << std::endl;
    std::cout << std::endl;    
}