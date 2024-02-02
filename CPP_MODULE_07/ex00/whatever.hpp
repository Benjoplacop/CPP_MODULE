/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhennequ <bhennequ@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 15:16:09 by bhennequ          #+#    #+#             */
/*   Updated: 2023/11/20 11:26:07 by bhennequ         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

template< typename T> 
T max(T const &x, T const &y) {
    return ((x>y) ? x : y);
}

template< typename U>
U min(U const &x, U const &y) 
{
    return ( (x<y) ? x : y ); 
}

template< typename P>
void swap(P &x, P &y)
{
    P tmp = x;
    x = y;
    y = tmp;
}