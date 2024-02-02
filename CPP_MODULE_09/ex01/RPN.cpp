/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhennequ <bhennequ@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 12:41:48 by bhennequ          #+#    #+#             */
/*   Updated: 2023/11/22 13:12:06 by bhennequ         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN()
{
    //std::cout << "RPN constructor called " << std::endl;
}

RPN::~RPN()
{
    //std::cout << "RPN destructor called " << std::endl;
}

RPN::RPN(RPN const &copy)
{
    std::cout << "RPN copy constructor called " << std::endl;
    *this = copy;
}

RPN& RPN::operator=(RPN const &src)
{
    std::cout << "RPN assignement operator called " << std::endl;
    if (this != &src)
        num = src.num;
    return (*this);
}

void RPN::calcul(std::string input)
{
    std::istringstream iss(input);
    std::string token;

    while (iss >> token)
    {
        if (isdigit(token[0]))
            num.push(atoi(token.c_str()));
        else
        {
            if (num.size() < 2)
            {
                std::cerr << "Error" << std::endl;
                return ;
            }

            int operand1 = num.top();
            num.pop();

            int operand2 = num.top();
            num.pop();

            if (token == "+")
                num.push(operand2 + operand1);
            else if (token == "-")
                num.push(operand2 - operand1);
            else if (token == "*")
                num.push(operand2 * operand1);
            else if (token == "/")
            {
                if (operand1 == 0)
                {    
                    std::cerr << "Error" << std::endl;
                    return ;
                }
                num.push(operand2 / operand1);
            }
            else
            {
                std::cout << "Error" << std::endl;
                return ;
            }           
        }
    }
    if (num.size() == 1)
        std::cout << num.top() << std::endl;
    else
        std::cout << "Error" << std::endl;
}