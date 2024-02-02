/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhennequ <bhennequ@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 11:10:32 by bhennequ          #+#    #+#             */
/*   Updated: 2023/11/20 11:19:34 by bhennequ         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>

template <typename T>

void iter(T* array, int len, void (*foo)(T&))
{
    if (!array || !foo)
        return;
    for (int i = 0; i < len; i++)
        foo(array[i]);
}