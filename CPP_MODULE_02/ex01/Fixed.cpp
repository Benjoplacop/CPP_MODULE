/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhennequ <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 13:42:45 by bhennequ          #+#    #+#             */
/*   Updated: 2023/09/27 13:42:46 by bhennequ         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_frac = 8;

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    this->_point = 0;
}

Fixed::Fixed(const int num)
{
    std::cout << "Int constructor called" << std::endl;
    this->_point = num << this->_frac;
}

Fixed::Fixed(const float num)
{
    std::cout << "Float constructor called" << std::endl;
    this->_point = roundf(num * (1 << this->_frac));
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed& copy)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = copy;
}

Fixed& Fixed::operator=(const Fixed &copy)
{
    std::cout << "Copy assignement operator called" << std::endl;
    if (this != &copy)
    {
        this->_point = copy.getRawBits();
    }
    return *this;
}

float   Fixed::toFloat(void) const 
{
    return ((float)_point / (float)(1 << _frac));
}

int Fixed::toInt(void) const 
{
    return ((int)_point >> (int)_frac);
}

void    Fixed::setRawBits(int const raw)
{
    std::cout << "setRawsBits member function called" << std::endl;
    this->_point = raw;
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member funtion called" << std::endl;
    return this->_point;
}

std::ostream& operator<<(std::ostream& os, const Fixed& fixed)
{
    os << fixed.toFloat();
    return os;
}