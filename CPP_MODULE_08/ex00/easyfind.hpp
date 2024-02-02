/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhennequ <bhennequ@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 13:53:41 by bhennequ          #+#    #+#             */
/*   Updated: 2023/11/20 14:35:56 by bhennequ         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <algorithm>
#include <string.h>
#include <vector>


class VectorNotFound: public std::exception
{
    public:
        char const * what() const throw()
        {
            return ("Index not found in the container!");
        }
};

template <typename T>

int *easyfind(T &container, int value)
{
    typename T::iterator it;
    it = std::find(container.begin(), container.end(), value);
    if (it == container.end())
        throw VectorNotFound();
    return (&(*it));
}