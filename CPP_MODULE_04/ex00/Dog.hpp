/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhennequ <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 14:53:54 by bhennequ          #+#    #+#             */
/*   Updated: 2023/10/04 14:53:55 by bhennequ         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal 
{
    public:
        Dog();
        Dog(Dog &copy);

        ~Dog();

        Dog& operator=(const Dog& src);

        void makeSound() const;
        std::string getType();
};

#endif
