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

#include "ScavTrap.hpp"

int main()
{
	ClapTrap a;
	ClapTrap b("Garen");

	a.attack("a creep");
	a.takeDamage(10);
	a.takeDamage(10);
	a.beRepaired(5);
	a.attack("a other creep");
	b.beRepaired(3);
	for (int i = 0; i < 12; i++)
		b.attack("Aatrox");
	b.beRepaired(3);

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
	return (0);
}