/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhennequ <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 14:32:36 by bhennequ          #+#    #+#             */
/*   Updated: 2023/10/04 14:32:38 by bhennequ         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal 
{
    private:

    protected:
            std::string _type;

    public:
        Animal();
        Animal(std::string type);
        Animal(Animal& copy);

        virtual ~Animal();

        Animal& operator=(const Animal& src);

        virtual void makeSound() const;
        virtual std::string getType() const;
};

#endif
