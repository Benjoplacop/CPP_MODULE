/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhennequ <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 13:50:44 by bhennequ          #+#    #+#             */
/*   Updated: 2023/09/28 13:50:44 by bhennequ         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Point.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
    Point vect_AB((b.getX() - a.getX()), (b.getY() - a.getY()));
    Point vect_AP((point.getX() - a.getX()), (point.getY() - a.getY()));
    Point vect_AC((c.getX() - a.getX()), (c.getY() - a.getY()));

    Point vect_BC((c.getX() - b.getX()), (c.getY() - b.getY()));
    Point vect_BP((point.getX() - b.getX()), (point.getY() - b.getY()));
    Point vect_BA((a.getX() - b.getX()), (a.getY() - b.getY()));
    
    Point vect_CA((a.getX() - c.getX()),  (a.getY() - c.getY()));
    Point vect_CB((b.getX() - c.getX()), (b.getY() - c.getY()));
    Point vect_CP((point.getX() - c.getX()), (point.getY() - c.getY()));

    float tmp1 = ((vect_AB.getX() * vect_AP.getY()) - (vect_AB.getY() * vect_AP.getX()))  * ((vect_AP.getX() * vect_AC.getY()) - (vect_AP.getY() * vect_AC.getX()));
    float tmp2 = ((vect_BA.getX() * vect_BP.getY()) - (vect_BA.getY() * vect_BP.getX()))  * ((vect_BP.getX() * vect_BC.getY()) - (vect_BP.getY() * vect_BC.getX()));
    float tmp3 = ((vect_CA.getX() * vect_CP.getY()) - (vect_CA.getY() * vect_CP.getX()))  * ((vect_CP.getX() * vect_CB.getY()) - (vect_CP.getY() * vect_CB.getX()));
    
    return (tmp1 >= 0 && tmp2 >= 0 && tmp3 >= 0);
}