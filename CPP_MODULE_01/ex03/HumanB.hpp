/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhennequ <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 15:29:06 by bhennequ          #+#    #+#             */
/*   Updated: 2023/09/21 15:29:07 by bhennequ         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
    private:
         std::string _name;
            Weapon* _weapon;
    public:
        ~HumanB(void);
        HumanB(const std::string& humanName);
        void    setWeapon(Weapon& humanWeapon);
        void    attack(void) const;
};

#endif
