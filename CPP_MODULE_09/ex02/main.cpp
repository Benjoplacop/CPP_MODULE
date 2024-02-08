/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhennequ <bhennequ@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 13:13:13 by bhennequ          #+#    #+#             */
/*   Updated: 2023/11/22 15:14:57 by bhennequ         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pmerge.hpp"

int main(int argc, char *argv[])
{
    if (argc > 1)
    {
        Pmerge pmerge(argc, argv);
        return 0;
    }
    return 1;
}