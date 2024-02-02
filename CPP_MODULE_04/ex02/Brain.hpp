/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhennequ <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 15:13:01 by bhennequ          #+#    #+#             */
/*   Updated: 2023/10/06 15:13:02 by bhennequ         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>

class Brain
{
    private:
        std::string *ideas;
    public:
        Brain();
        Brain(Brain& copy);

        ~Brain();

        Brain& operator=(const Brain& src);

        std::string *getIdeas();
};

#endif
