/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhennequ <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 15:29:13 by bhennequ          #+#    #+#             */
/*   Updated: 2023/09/21 15:29:14 by bhennequ         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "HumanB.hpp"

HumanB::HumanB(const std::string& humanName) : _name(humanName) {

    std::cout << "HumanB " << _name << " created with no weapon." << std::endl;
}

HumanB::~HumanB(void)
{
    std::cout << "HumanB " << _name << " was destroyed " << std::endl;
}

void    HumanB::setWeapon(Weapon& humanWeapon)
{
    this->_weapon = &humanWeapon;
}

void    HumanB::attack(void) const {
    std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
}