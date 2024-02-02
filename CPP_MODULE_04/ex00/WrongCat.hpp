/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhennequ <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 14:34:19 by bhennequ          #+#    #+#             */
/*   Updated: 2023/10/06 14:34:20 by bhennequ         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include <iostream>
#include <string>
#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{
    protected:
            std::string _type;
    public:
            WrongCat();
            WrongCat(WrongCat& copy);

            virtual ~WrongCat();

            WrongCat& operator=(const WrongCat& src);

            void makeSound() const;
            std::string getType() const;
};

#endif
