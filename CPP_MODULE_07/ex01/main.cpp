/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhennequ <bhennequ@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 11:10:16 by bhennequ          #+#    #+#             */
/*   Updated: 2023/11/20 11:27:59 by bhennequ         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>


void ft_tolower(char &arr)
{
	arr = std::tolower(static_cast<unsigned char>(arr));
}

void ft_toupper(char &arr)
{
	arr = std::toupper(static_cast<unsigned char>(arr));
}

int main(void)
{
    char tab[] = {'A', 'b', 'C', 'D'};

    iter(tab, 4, ft_tolower);

    for (int i = 0; i < 4; i ++)
        std::cout << tab[i] << std::endl;

    iter(tab, 4, ft_toupper);
    for (int i = 0; i < 4; i ++)
        std::cout << tab[i] << std::endl;
}