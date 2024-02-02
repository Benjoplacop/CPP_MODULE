/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhennequ <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 12:16:55 by bhennequ          #+#    #+#             */
/*   Updated: 2023/09/21 12:16:55 by bhennequ         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
    Zombie *zombie_tab = new Zombie[N];
    for (int i = 0; i < N; i++)
        zombie_tab[i].setName(name);
    return (zombie_tab);
}
