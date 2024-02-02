/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhennequ <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 12:00:00 by bhennequ          #+#    #+#             */
/*   Updated: 2023/11/09 12:00:00 by bhennequ         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer()
{
    std::cout << "Serializer constructor called !" << std::endl;
}

Serializer::Serializer(Serializer &copy)
{
    std::cout << "Serializer copy constructor called !" << std::endl;
    *this = copy;
}

Serializer::~Serializer()
{
    std::cout << "Serializer destructor called !" << std::endl;
}

Serializer& Serializer::operator=(Serializer const &src)
{
    std::cout << "Serializer assignement operator called !" << std::endl;
    if (this == &src)
        return (*this);
    return (*this);
}

uintptr_t Serializer::serialize(Data* ptr)
{
    return reinterpret_cast<uintptr_t>(ptr);
}

Data* Serializer::deserialize(uintptr_t raw)
{
    return reinterpret_cast<Data *>(raw);
}
