/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhennequ <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 17:30:45 by bhennequ          #+#    #+#             */
/*   Updated: 2023/09/25 17:33:11 by bhennequ         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int harl_value(char *argv)
{
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

    for (int i = 0; i < 4; i++)
    {
        if (argv == levels[i])
            return i;
    }
    return -1;
}

void    harl_switch(char *argv, Harl h)
{
    switch (harl_value(argv))
    {
        case 0 : 
                h.complain("DEBUG");
        case 1 :
                h.complain("INFO");
        case 2 :
                h.complain("WARNING");
        case 3 :
                h.complain("ERROR");
                break ;
        default : 
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
    }
}

int main(int argc, char **argv)
{
    Harl h;

    if (argc != 2)
    {
        std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
        return 0;
    }
    else
        harl_switch(argv[1], h);
    return 0;
}
