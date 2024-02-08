/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pmerge.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhennequ <bhennequ@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 13:14:12 by bhennequ          #+#    #+#             */
/*   Updated: 2024/02/07 11:12:39 by bhennequ         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <ctime>
#include <cstdlib>
#include <algorithm>



class Pmerge
{
    private:
            std::vector<int> dataVec;
            std::list<int> dataList;
    public:
            Pmerge(int argc, char **argv);
            //~Pmerge();
            //Pmerge(Pmerge& const copy);
            //Pmerge& operator=(Pmerger const &src);
            template <typename T>
            void printCont(const T container);

            void sortList(std::list<int>& list, std::list<int>::iterator left, std::list<int>::iterator right, int k) 
            //void sortVector(std::vector<int>& vector);
            void sortVector(std::vector<int>& arr, int left, int right, int k);
};