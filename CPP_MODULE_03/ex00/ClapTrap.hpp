/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhennequ <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 12:25:13 by bhennequ          #+#    #+#             */
/*   Updated: 2023/10/02 12:25:14 by bhennequ         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>
#include <iostream>

class ClapTrap {
    private:
            std::string          _name;
            unsigned int         _hitPoint;
            unsigned int         _energy;
            unsigned int         _attackDmg;

    public:
            ClapTrap();
            ClapTrap(std::string name);
            ClapTrap(const ClapTrap& copy);

            ~ClapTrap();
            
            ClapTrap& operator=(const ClapTrap& copy);

            void    attack(const std::string &target);
            void    takeDamage(unsigned int amount);
            void    beRepaired(unsigned int amount);
};

#endif