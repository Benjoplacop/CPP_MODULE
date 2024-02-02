/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhennequ <bhennequ@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 16:46:14 by bhennequ          #+#    #+#             */
/*   Updated: 2023/11/21 11:31:00 by bhennequ         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include<iostream>
#include <string>
#include <stack>

template<typename T>
class MutantStack: public std::stack<T>
{
    public:
            typedef std::stack<T> stack;
            typedef typename stack::container_type container;
            typedef typename container::iterator iterator;
            MutantStack(): stack(){}
            MutantStack(MutantStack const &copy): stack(copy) {}
            ~MutantStack()
            {
                std::cout << "Destructor called !" << std::endl;
            }
            MutantStack& operator=(MutantStack const &src)
            {
                if (*this != src)
                    *this = src;
                return *this;
            }

            typename MutantStack<T>::iterator begin()
            {
                return this->c.begin();
            }

            typename MutantStack<T>::iterator end()
            {
                return this->c.end();
            }


    private:
    
};