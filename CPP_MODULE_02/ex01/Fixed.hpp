/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhennequ <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 13:42:55 by bhennequ          #+#    #+#             */
/*   Updated: 2023/09/27 13:42:57 by bhennequ         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <string>
#include <cmath>

class Fixed{
    private:
            int _point;
            static const int _frac;
    public:
            Fixed();
            Fixed(const int num);
            Fixed(const float num);
            Fixed(const Fixed& copy);

            ~Fixed();

            Fixed& operator=(const Fixed& copy);

            float toFloat(void) const;
            int   toInt(void) const;

            int getRawBits(void) const;
            void setRawBits(int const raw);
};

std::ostream& operator<<(std::ostream& os, const Fixed& fixed);

#endif