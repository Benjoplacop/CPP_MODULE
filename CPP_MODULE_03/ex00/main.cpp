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

#include "ClapTrap.hpp"

int main()
{
    ClapTrap a;
    ClapTrap b("Garen");

	a.attack("a robot");
	a.takeDamage(10);
	a.takeDamage(10);
	a.beRepaired(5);
	a.attack("a big robot");
	b.beRepaired(3);
	for (int i = 0; i < 12; i++)
		b.attack("Garen sister");
	b.beRepaired(3);
}