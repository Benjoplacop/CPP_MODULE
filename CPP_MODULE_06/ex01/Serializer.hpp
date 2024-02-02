/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhennequ <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 12:00:04 by bhennequ          #+#    #+#             */
/*   Updated: 2023/11/09 12:00:05 by bhennequ         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>
#include <cstddef>
#include <stdint.h>

typedef struct Data
{
    std::string name;
    int         value;
    Data        *next;
}                  Data;

class Serializer
{
    public:
            Serializer();
            Serializer(Serializer &copy);
            ~Serializer();

            Serializer& operator=(Serializer const &src);

            uintptr_t serialize(Data* ptr);
            Data* deserialize(uintptr_t raw);
    private:
};