/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhennequ <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 15:58:17 by bhennequ          #+#    #+#             */
/*   Updated: 2023/09/27 15:58:18 by bhennequ         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>
#include <cmath>

class Fixed
{
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

        bool  operator>(Fixed fixed)const;
        bool  operator<(Fixed fixed)const;
        bool  operator>=(Fixed fixed)const;
        bool  operator<=(Fixed fixed)const;
        bool  operator!=(Fixed fixed)const;
        bool  operator==(Fixed fixed)const;

        float operator+(Fixed fixed)const;
        float operator-(Fixed fixed)const;
        float operator*(Fixed fixed)const;
        float operator/(Fixed fixed)const;

        Fixed& operator++();
        Fixed operator++(int n);
        Fixed& operator--();
        Fixed operator--(int n);

        static Fixed       &min(Fixed &a, Fixed &b);
        static const Fixed &min(const Fixed &a, const Fixed &b);
        static Fixed       &max(Fixed &a, Fixed &b);
        static const Fixed &max(const Fixed &a, const Fixed &b);
};

std::ostream& operator<<(std::ostream& os, const Fixed& fixed);

#endif