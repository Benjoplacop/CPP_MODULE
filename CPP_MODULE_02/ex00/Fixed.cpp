/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhennequ <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 19:38:43 by bhennequ          #+#    #+#             */
/*   Updated: 2023/09/25 19:38:45 by bhennequ         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_frac = 8;

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    this->_point = 0;
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
    return (*this);
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