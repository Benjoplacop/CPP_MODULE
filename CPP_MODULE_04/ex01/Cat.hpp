/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhennequ <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 14:53:04 by bhennequ          #+#    #+#             */
/*   Updated: 2023/10/04 14:53:05 by bhennequ         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal
{
    private:
            Brain      *brain;
    public:
        Cat();
        Cat(Cat &copy);

        ~Cat();

        Cat& operator=(const Cat& src);

        void makeSound() const;
        std::string getType() const;
        Brain *getBrain() const;
        void    compare(const Cat& other) const;
};

#endif
