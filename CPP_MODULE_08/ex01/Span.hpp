/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhennequ <bhennequ@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 14:37:39 by bhennequ          #+#    #+#             */
/*   Updated: 2023/11/20 16:24:16 by bhennequ         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <stdexcept>
#include <string.h>
#include <unistd.h>
#include <algorithm>
#include <vector>
#include <limits>

class Span {
    public:
            Span();
            Span(unsigned int N);
            Span(Span const &copy);
            ~Span();

            Span& operator=(Span const &src);

            void addNumber(int n);

            int shortestSpan() const;

            int longestSpan() const;

            int randInt(unsigned int n);
            void fill(void);

            class overFlowException: public std::exception
            {
                public:
                    const char * what() const throw();
            };

            class logicError: public std::exception
            {
                public:
                    const char * what() const throw();
            };

    private:
        unsigned int N;
        std::vector<int> numbers;
};