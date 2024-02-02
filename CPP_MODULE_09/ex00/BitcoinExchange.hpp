/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhennequ <bhennequ@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 11:38:24 by bhennequ          #+#    #+#             */
/*   Updated: 2023/11/21 19:29:11 by bhennequ         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <map>
#include <fstream>
#include <vector>
#include <sstream>
#include <cctype>
#include <iomanip>
#include <cmath>
#include <cstdlib>


class BitCoin 
{
    private:
            std::map <std::string, float> data;

    public:
            BitCoin();
            BitCoin(BitCoin const &copy);
            ~BitCoin();
            BitCoin& operator=(BitCoin const &src);

            class openFileException : public std::exception 
            {
                public:
                    const char * what() const throw();
            };

            void takeInput(std::string const &path);
};