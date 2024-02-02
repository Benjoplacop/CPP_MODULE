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

#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal 
{
    private:
            std::string _type;
            Brain       *brain;
    public:
        Dog();
        Dog(Dog &copy);

        ~Dog();

        Dog& operator=(const Dog& src);

        void makeSound() const;
        //std::string getType() const;
        Brain *getBrain() const;
        void    compare(const Dog& other) const;
};

#endif
