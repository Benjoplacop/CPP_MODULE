/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhennequ <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 10:42:08 by bhennequ          #+#    #+#             */
/*   Updated: 2023/09/20 10:42:09 by bhennequ         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* newZombie(std::string name);

void    randomChump(std::string name);

int main(void)
{
    Zombie *zombie = newZombie("Foo");
    zombie->announce();
    delete zombie;
    randomChump("Faa");

    return (0);
}
