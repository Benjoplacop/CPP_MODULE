/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhennequ <bhennequ@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 13:53:18 by bhennequ          #+#    #+#             */
/*   Updated: 2023/11/20 14:36:26 by bhennequ         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>

int main()
{
    std::vector<int> vec;

    try
    {
        vec.push_back(10);
        vec.push_back(15);
        easyfind(vec, 15);
        std::cout << "Number found !"<< std::endl;
    }
    catch (const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    try 
    {
        std::vector<int> vec2(10, -1);
        easyfind(vec2, 3);
        std::cout << "Number found !" << std::endl;
    }
    catch (const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    return 0;
}