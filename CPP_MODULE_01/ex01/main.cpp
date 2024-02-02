/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhennequ <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 12:16:27 by bhennequ          #+#    #+#             */
/*   Updated: 2023/09/21 12:16:29 by bhennequ         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name);

int main(void)
{
    int size;

    size = 16;
    Zombie *horde = zombieHorde(size, "Zomb Zomb");
    for (int i = 0; i < size; i++)
        horde[i].announce();
    delete [] horde;
    return (0);
}
