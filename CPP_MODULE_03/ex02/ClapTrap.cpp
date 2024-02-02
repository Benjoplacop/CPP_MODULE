/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhennequ <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 12:25:18 by bhennequ          #+#    #+#             */
/*   Updated: 2023/10/02 12:25:20 by bhennequ         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): _name("Default"), _hitPoint(100), _energy(50), _attackDmg(20)
{
    std::cout << "ClapTrap constructor called !" << std::endl;
}

ClapTrap::ClapTrap(std::string name): _name(name), _hitPoint(100), _energy(50), _attackDmg(20)
{
    std::cout << "ClapTrap name " << name << " constructor called !" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap destructor called !" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& copy)
{
    std::cout << "Copy constructor called !" << std::endl;
    *this = copy; 
}

ClapTrap& ClapTrap::operator=(const ClapTrap& copy)
{
    std::cout << "Copy ClapTrap assignement operator called !" << std::endl;
    this->_name = copy._name;
    this->_hitPoint = copy._hitPoint;
    this->_energy = copy._energy;
    this->_attackDmg = copy._attackDmg;
    return (*this);
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    if (this->_hitPoint > 0 && this->_energy > 0)
    {
        this->_energy--;
        this->_hitPoint += amount;
        std::cout << "ClapTrap " << this->_name << " be repaired " << amount << " health !" << std::endl;
    }
    else if (this->_hitPoint == 0)
        std::cout << "ClapTrap " << this->_name << " have no hit points for repaired." << std::endl;
    else
        std::cout << "ClapTrap " << this->_name << " have no energy for repaired." << std::endl;
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    if (this->_hitPoint > amount)
    {
        this->_hitPoint -= amount;
        std::cout << "ClapTrap " << this->_name << " take " << amount << " damage ! He was now at " << this->_hitPoint << " hit points " << std::endl;
    }
    else if (this->_hitPoint > 0)
    {
        this->_hitPoint = 0;
        std::cout << "ClapTrap " << this->_name << " take " << amount << " damage ! He was now at " << this->_hitPoint << " hit points " << std::endl;
    }
    else
        std::cout << "ClapTrap " << this->_name << " is already dead !" << std::endl; 
}

void    ClapTrap::attack(const std::string &target)
{
    if (this->_hitPoint > 0 && this->_energy > 0)
    {
        std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDmg << " point of damage !" << std::endl;
        this->_energy--;
    }
    else if (this->_hitPoint == 0)
        std::cout << "ClapTrap " << this->_name << " have no hit points for attack." << std::endl;
    else
        std::cout << "ClapTrap " << this->_name << " have no energy for attack." << std::endl;
}