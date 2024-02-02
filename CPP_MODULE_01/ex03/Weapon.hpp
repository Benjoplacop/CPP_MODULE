/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhennequ <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 15:28:25 by bhennequ          #+#    #+#             */
/*   Updated: 2023/09/21 15:28:26 by bhennequ         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <string>
#include <iostream>


class   Weapon {
    private:
            std::string _type;
    public:
            Weapon(const std::string& weaponType);
            ~Weapon(void);
            const std::string& getType() const;
            void    setType(std::string newType);
};

#endif