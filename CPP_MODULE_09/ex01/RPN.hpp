/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhennequ <bhennequ@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 12:41:40 by bhennequ          #+#    #+#             */
/*   Updated: 2023/11/22 14:33:08 by bhennequ         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <stack>
#include <sstream>
#include <cstdlib>

class RPN
{
    private:
            std::stack<int> num;
    public:
            RPN();
            RPN(RPN const &copy);
            ~RPN();
            RPN& operator=(const RPN &src);

            void calcul(std::string input); 
};