/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhennequ <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 15:28:54 by bhennequ          #+#    #+#             */
/*   Updated: 2023/09/21 15:28:55 by bhennequ         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(const std::string& humanName, Weapon &humanWeapon) : _name(humanName), _weapon(humanWeapon) {

    std::cout << "HumanA " << _name << " created with " << _weapon.getType() << std::endl;
}

HumanA::~HumanA(void)
{
    std::cout << "HumanA " << _name << " was destroyed" << std::endl;
}

void    HumanA::attack() const
{
    std::cout << _name << " attacks with their " << _weapon.getType() << std::endl;
}
