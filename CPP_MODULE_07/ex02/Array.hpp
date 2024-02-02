/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhennequ <bhennequ@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 11:35:37 by bhennequ          #+#    #+#             */
/*   Updated: 2023/11/20 13:16:22 by bhennequ         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <stdexcept>

template < typename T>

class Array {
    public:
            Array(): _size(0)
            {
               // std::cout << "Array constructor called !" << std::endl;
                this->_array = new T[this->_size];
            }

            Array(unsigned int n): _size(n)
            {
               // std::cout << "Array constructor with size called !" << std::endl;
                this->_array = new T[this->_size];
            }

            Array(Array& copy): _size(copy.size())
            {
               // std::cout << "Array copy constructor called !" << std::endl;
                this->_array = NULL;
                *this = copy;
            }

            Array& operator=(Array const &src)
            {
               // std::cout << "Assignement operator called !" << std::endl;
                if (this->_array != NULL)
                    delete [] this->_array;
                if (src.size() != 0)
                {
                    this->_size = src.size();
                    this->_array = new T[this->_size];
                    for (unsigned int i = 0; i < this->_size; i++)
                        this->_array[i] = src._array[i];
                }
                return (*this);
            }

            T& operator[](unsigned int index)
            {
                if (index >= this->_size || this->_array == NULL)
                {
                    std::cout << "index: " << index << std::endl;
                    throw Array<T>::Except();
                }
                return (this->_array[index]);
            }

            ~Array()
            {
                if (this->_array != NULL)
                    delete [] this->_array;
               // std::cout << "Array destructor called !" << std::endl;
            }

            unsigned int size() const
            {
                return (this->_size);
            }

            class Except : public std::exception
            {
                public:
                    virtual const char *wath() const throw();
            };
            
    private:
        T *_array;
        unsigned int _size;

};

template <typename T >
const char *Array<T>::Except::wath() const throw()
{
    return ("Error: Invalid index");
}