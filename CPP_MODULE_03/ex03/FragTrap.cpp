/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhennequ <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 15:05:24 by bhennequ          #+#    #+#             */
/*   Updated: 2023/10/02 15:05:25 by bhennequ         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap() 
{
    std::cout << "FragTrap constructor called !" << std::endl;
}

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
    std::cout << "FragTrap name " << name << "constructor called !" << std::endl;
}

FragTrap::FragTrap(FragTrap& copy): ClapTrap(copy)
{
    std::cout << "FragTrap copy constructor called !" << std::endl;
    this->_attackDmg = 30;
    this->_energy = 100;
    this->_hitPoint = 100;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap destructor called !" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& src)
{
    std::cout << "Copy FragTrap assignement operator called !" << std::endl;
    this->_name = src._name;
    this->_attackDmg = src._attackDmg;
    this->_energy = src._energy;
    this->_hitPoint = src._hitPoint;
    return *this;
}

void    FragTrap::highFiveGuys(void)
{
    std::cout << "FragTrap " << this->_name << ": Do you want high fives brooooo ?" << std::endl;
}