/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhennequ <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 12:01:15 by bhennequ          #+#    #+#             */
/*   Updated: 2023/09/28 12:01:16 by bhennequ         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const point);

int main(void)
{
    Point A(0, 0);
    Point B(4, 0);
    Point C(0, 4);
    
    Point P1(2, 2); // À l'intérieur du triangle ABC
    Point P2(3, 3); // À l'intérieur du triangle ABC
    Point P3(5, 5); // À l'extérieur du triangle ABC
    
    Point D(1, 1);
    Point E(5, 1);
    Point F(3, 5);
    
    Point Q1(2, 2); // À l'intérieur du triangle DEF
    Point Q2(4, 4); // À l'intérieur du triangle DEF
    Point Q3(2, 4); // À l'extérieur du triangle DEF

    if (bsp(A, B, C, P1)) {
        std::cout << "P1 est à l'intérieur du triangle ABC." << std::endl;
    } else {
        std::cout << "P1 est à l'extérieur du triangle ABC." << std::endl;
    }

    if (bsp(A, B, C, P2)) {
        std::cout << "P2 est à l'intérieur du triangle ABC." << std::endl;
    } else {
        std::cout << "P2 est à l'extérieur du triangle ABC." << std::endl;
    }

    if (bsp(A, B, C, P3)) {
        std::cout << "P3 est à l'intérieur du triangle ABC." << std::endl;
    } else {
        std::cout << "P3 est à l'extérieur du triangle ABC." << std::endl;
    }

    if (bsp(D, E, F, Q1)) {
        std::cout << "Q1 est à l'intérieur du triangle DEF." << std::endl;
    } else {
        std::cout << "Q1 est à l'extérieur du triangle DEF." << std::endl;
    }

    if (bsp(D, E, F, Q2)) {
        std::cout << "Q2 est à l'intérieur du triangle DEF." << std::endl;
    } else {
        std::cout << "Q2 est à l'extérieur du triangle DEF." << std::endl;
    }

    if (bsp(D, E, F, Q3)) {
        std::cout << "Q3 est à l'intérieur du triangle DEF." << std::endl;
    } else {
        std::cout << "Q3 est à l'extérieur du triangle DEF." << std::endl;
    }

}
