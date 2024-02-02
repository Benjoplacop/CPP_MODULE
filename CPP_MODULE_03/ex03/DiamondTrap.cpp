/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhennequ <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 15:36:51 by bhennequ          #+#    #+#             */
/*   Updated: 2023/10/02 15:36:52 by bhennequ         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("Default_clap_name")
{
    std::cout << "DiamondTrap constructor called !" << std::endl;
    this->_name = "Default";
    this->_attackDmg = FragTrap::_attackDmg;
    this->_hitPoint = FragTrap::_hitPoint;
    this->_energy = ScavTrap::_energy;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name")
{
    this->_name = name;
    this->_attackDmg = FragTrap::_attackDmg;
    this->_hitPoint = FragTrap::_hitPoint;
    this->_energy = ScavTrap::_energy;
    std::cout << "DiamondTrap name " << name << "constructor called !" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap &copy) : FragTrap(copy), ScavTrap(copy), ClapTrap(copy)
{
    *this = copy;
    std::cout << "DiamondTrap copy constructor called !" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap destructor called !" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& src)
{
    std::cout << "Copy DiamondTrap assignement operator called !" << std::endl;
    this->_name = src._name + "_clap_name";
    this->_attackDmg = src._attackDmg;
    this->_energy = src._energy;
    this->_hitPoint = src._hitPoint;
    return *this;
}

void    DiamondTrap::attack(const std::string &target)
{
    ScavTrap::attack(target);
}

void    DiamondTrap::whoAmI()
{
    std::cout << "I am DiamondTrap: " << this->_name << " and my ClapTrap name is: " << FragTrap::_name << std::endl; 
}
