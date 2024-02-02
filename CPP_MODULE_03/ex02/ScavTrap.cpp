/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhennequ <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 13:49:11 by bhennequ          #+#    #+#             */
/*   Updated: 2023/10/02 13:49:12 by bhennequ         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
    this->_attackDmg = 20;
    this->_energy = 50;
    this->_hitPoint = 100;
    this->_guardGateMode = false;
    std::cout << "ScavTrap constructor called !" << std::endl;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
    this->_attackDmg = 20;
    this->_energy = 50;
    this->_hitPoint = 100;
    this->_guardGateMode = false;
    std::cout << "ScavTrap name " << name << " constructor called !" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap& copy) : ClapTrap(copy)
{
    this->_guardGateMode = copy._guardGateMode;
     std::cout << "ScavTrap copy constructor called !" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap destructor called !" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& src)
{
    std::cout << "Copy ScavTrap assignement operator called !" << std::endl;
    this->_name = src._name;
    this->_hitPoint = src._hitPoint;
    this->_energy = src._energy;
    this->_attackDmg = src._attackDmg;
    return (*this);
}

void    ScavTrap::attack(const std::string &target)
{
    if (this->_hitPoint > 0 && this->_energy > 0)
    {
        std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDmg << " point of damage !" << std::endl;
        this->_energy--;
    }
    else if (this->_hitPoint == 0)
        std::cout << "ScavTrap " << this->_name << " have no hit points for attack." << std::endl;
    else
        std::cout << "ScavTrap " << this->_name << " have no energy for attack." << std::endl;
}

void    ScavTrap::guardGate()
{
    if (this->_guardGateMode == false)
    {    
        this->_guardGateMode = true;
        std::cout << "ScavTrap " << this->_name << " is now guarding the gate !" << std::endl;
    }
    else
        std::cout << "ScavTrap " << this->_name << " is already guarding the gate !" << std::endl;
}
