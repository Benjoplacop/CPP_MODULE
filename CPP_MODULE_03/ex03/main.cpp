/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhennequ <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 12:25:05 by bhennequ          #+#    #+#             */
/*   Updated: 2023/10/02 12:25:06 by bhennequ         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main()
{
	ScavTrap c;
	ScavTrap d("Sylas");

	c.attack("Shaco's clone");
	c.beRepaired(22);
	c.takeDamage(21);
	c.beRepaired(22);
	c.guardGate();
	c.guardGate();
	d.attack("Lux");
	d.takeDamage(101);
	d.takeDamage(15);
	d.attack("Nocturne");

	FragTrap e;
	FragTrap f("Jarvan IV");

	e.highFiveGuys();
	e.attack("some random dude");
	e.takeDamage(101);
	e.takeDamage(1);
	e.attack("some random dude");
	f.highFiveGuys();

	DiamondTrap g;
	DiamondTrap h("Sett");
	DiamondTrap i(g);
	g.whoAmI();
	g.attack("jax");
	h.whoAmI();
	h.attack("Sett");
	i.whoAmI();
	return (0);
}