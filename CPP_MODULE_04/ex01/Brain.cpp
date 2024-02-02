/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhennequ <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 15:12:52 by bhennequ          #+#    #+#             */
/*   Updated: 2023/10/06 15:12:53 by bhennequ         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    this->ideas = new std::string[100];
    for (int i = 0; i < 100; i++)
        this->ideas[i] = "Brain idea";
    std::cout << "Brain constructor called !" << std::endl;
}

Brain::Brain(Brain &copy)
{
    std::string *copy_ideas = copy.getIdeas();
    this->ideas = new std::string[100];
    for (int i = 0; i < 100; i++)
        this->ideas[i] = copy_ideas[i] + " copy";
    std::cout << "Brain copy constructor called !" << std::endl;
}

Brain::~Brain()
{
    delete [] this->ideas;
    std::cout << "Brain destructor called !" << std::endl;
}

Brain& Brain::operator=(const Brain& src)
{
    for (int i = 0; i < 100; i++)
        this->ideas[i] = src.ideas[i];
    std::cout << "Brain operator called !" << std::endl;
    return *this;
}

std::string *Brain::getIdeas()
{
    return (this->ideas);
}