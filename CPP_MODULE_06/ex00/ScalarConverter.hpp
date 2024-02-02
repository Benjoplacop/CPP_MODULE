/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhennequ <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 19:20:45 by bhennequ          #+#    #+#             */
/*   Updated: 2023/11/07 19:20:45 by bhennequ         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>
#include <limits>
#include <climits>
#include <cstdlib>

#define INT 1
#define CHAR 2
#define FLOAT 3
#define DOUBLE 4
#define ERROR 5
#define NAN_INF 6


class ScalarConverter
{
    public:
            ScalarConverter(const std::string input);
            ScalarConverter(ScalarConverter &copy);
            ~ScalarConverter();
            ScalarConverter& operator=(const ScalarConverter &src);

            class ErrorException: public std::exception
            {
                public:
                    virtual const char* what() const throw();
            };

            
    private:
            const std::string _input;
            int _type;
            char _char;
            int _int;
            float _float;
            double _double;

            const std::string getInput() const;
            int getType() const;
            char getChar() const;
            int getInt() const;
            float getFloat() const;
            double getDouble() const;

            int checkInput();
            void takeInput();
            void printConvert() const;

            void    convertChar();
            void    convertDouble();
            void    convertFloat();
            void    convertInt();

            ScalarConverter();

};