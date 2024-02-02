/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhennequ <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 15:28:43 by bhennequ          #+#    #+#             */
/*   Updated: 2023/09/21 15:28:45 by bhennequ         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class   HumanA {
    private:
        std::string _name;
        Weapon &_weapon;

    public:
        ~HumanA(void);
        HumanA(const std::string& humanName, Weapon &humanWeapon);
        void attack() const;
};

#endif 