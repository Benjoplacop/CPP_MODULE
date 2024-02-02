/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhennequ <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 13:50:35 by bhennequ          #+#    #+#             */
/*   Updated: 2023/09/28 13:50:36 by bhennequ         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Point.hpp"

Point::Point() : _x(0), _y(0)
{
    //constructor
}

Point::Point(const float x, const float y) : _x(x), _y(y)
{

}

Point::Point(const Point& copy)
{
    //copy constructor
    *this = copy;
}

Point::~Point()
{
    //destructor
}

Point& Point::operator=(const Point& copy)
{
    // copy assignement operator
    if (this != &copy)
        return *this;
    return *this;
}

const Fixed& Point::getX(void) const
{
    return (this->_x);
}

const Fixed& Point::getY(void) const
{
    return (this->_y);
}