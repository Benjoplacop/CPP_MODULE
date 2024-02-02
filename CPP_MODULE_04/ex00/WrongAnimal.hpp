/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhennequ <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 14:33:57 by bhennequ          #+#    #+#             */
/*   Updated: 2023/10/06 14:33:58 by bhennequ         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include <string>


class WrongAnimal
{
    private:

    protected: 
            std::string _type;

    public:
            WrongAnimal();
            WrongAnimal(WrongAnimal& copy);

            virtual ~WrongAnimal();

            WrongAnimal& operator=(const WrongAnimal& src);

           void    makeSound() const;
           std::string getType() const;
};

#endif
