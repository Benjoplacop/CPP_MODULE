/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhennequ <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 12:16:43 by bhennequ          #+#    #+#             */
/*   Updated: 2023/09/21 12:16:44 by bhennequ         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(const std::string& name)
{
    this->_name = name;
    std::cout << this->_name << " Zombie was created." << std::endl;
}

Zombie::Zombie(void)
{
    std::cout << "Zombie object created." << std::endl;
}

Zombie::~Zombie(void)
{
    std::cout << "Zombie object " << this->_name << " destroyed." << std::endl;
}

void    Zombie::announce()
{
    std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void    Zombie::setName(std::string name)
{
    this->_name = name;
}