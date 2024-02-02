/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhennequ <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 13:49:17 by bhennequ          #+#    #+#             */
/*   Updated: 2023/10/02 13:49:17 by bhennequ         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class   ScavTrap : virtual public ClapTrap 
{
    private:
            bool    _guardGateMode;
    public:
            ScavTrap();
            ScavTrap(std::string name);
            ScavTrap(ScavTrap& copy);

            ~ScavTrap();

            ScavTrap& operator=(const ScavTrap& src);
            
            void    attack(const std::string &target);
            void    guardGate();

};

#endif
