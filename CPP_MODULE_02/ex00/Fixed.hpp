/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhennequ <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 19:38:37 by bhennequ          #+#    #+#             */
/*   Updated: 2023/09/25 19:38:38 by bhennequ         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>

class Fixed
{
private:
    int _point;
    static const int _frac;
public:
    Fixed();
    Fixed(const Fixed& copy);
    ~Fixed();
    Fixed& operator=(const Fixed &copy);
    int     getRawBits(void) const;
    void    setRawBits(int const raw);
};

#endif
