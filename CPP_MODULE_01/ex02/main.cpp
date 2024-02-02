/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhennequ <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 15:03:09 by bhennequ          #+#    #+#             */
/*   Updated: 2023/09/21 15:03:11 by bhennequ         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(void)
{
    std::string str = "HI THIS IS BRAIN";
    std::string* stringPTR = &str;
    std::string& stringREF = str;

    std::cout << "The memory address of the string variable is " << &str << std::endl;
    std::cout << "The memory address held by stringPTR is " << stringPTR << std::endl;
    std::cout << "The memory address held by stringREF is " << &stringREF<< std::endl;

    std::cout << "The value of the string variable is " << str << std::endl;
    std::cout << "The value pointed to by stringPTR is " << *stringPTR << std::endl;
    std::cout << "The value pointed to by stringREF is " << stringREF<< std::endl;
}