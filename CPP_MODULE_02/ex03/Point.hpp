/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhennequ <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 13:50:30 by bhennequ          #+#    #+#             */
/*   Updated: 2023/09/28 13:50:30 by bhennequ         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point {
    private:
        const Fixed _x;
        const Fixed _y;
    public:
        Point();
        Point(const Point& copy);
        Point(const float x, const float y);

        ~Point();

        Point& operator=(const Point& copy);

        const Fixed&     getX(void)const;
        const Fixed&     getY(void)const;
};

std::ostream& operator<<(std::ostream& os, const Point& point);

#endif