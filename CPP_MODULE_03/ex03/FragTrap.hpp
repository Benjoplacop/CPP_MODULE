/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhennequ <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 15:05:30 by bhennequ          #+#    #+#             */
/*   Updated: 2023/10/02 15:05:32 by bhennequ         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ScavTrap.hpp"

class FragTrap : virtual public ClapTrap
{
    private :

    public :
            FragTrap();
            FragTrap(std::string name);
            FragTrap(FragTrap& copy);

            ~FragTrap();

            FragTrap& operator=(const FragTrap& src);

            void    highFiveGuys(void);
};

#endif