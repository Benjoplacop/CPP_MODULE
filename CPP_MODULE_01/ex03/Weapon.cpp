/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhennequ <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 15:28:33 by bhennequ          #+#    #+#             */
/*   Updated: 2023/09/21 15:28:34 by bhennequ         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(const std::string& weaponType) : _type(weaponType){}

Weapon::~Weapon(void){}

const std::string&   Weapon::getType() const
{
    return this->_type;
}

void    Weapon::setType(std::string newType)
{
   // std::cout << newType << std::endl;
    this->_type = newType;
}