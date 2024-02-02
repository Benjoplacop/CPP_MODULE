/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhennequ <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 14:32:36 by bhennequ          #+#    #+#             */
/*   Updated: 2023/10/04 14:32:38 by bhennequ         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AAnimal_HPP
#define AAnimal_HPP

#include <iostream>
#include <string>

class AAnimal 
{
    private:

    protected:
            std::string _type;

    public:
        AAnimal();
        AAnimal(std::string type);
        AAnimal(AAnimal& copy);

        virtual ~AAnimal();

        AAnimal& operator=(const AAnimal& src);

        virtual void makeSound() const = 0;
        std::string getType() const;
};

#endif
