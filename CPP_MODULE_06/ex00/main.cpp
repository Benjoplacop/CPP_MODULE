/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhennequ <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 19:20:41 by bhennequ          #+#    #+#             */
/*   Updated: 2023/11/07 19:20:42 by bhennequ         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cout << "one argument needed !" << std::endl;
        return (0);
    }
    try
    {
        ScalarConverter convert(argv[1]);
    }
    catch(const ScalarConverter::ErrorException &e)
    {
        std::cerr << e.what() << std::endl;
    }
    return (0);
}
