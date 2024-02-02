/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhennequ <bhennequ@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 14:37:50 by bhennequ          #+#    #+#             */
/*   Updated: 2023/11/20 16:35:18 by bhennequ         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(): N(0)
{
    std::cout << "Span constructor called !" << std::endl;
}

Span::Span(unsigned int N): N(N)
{
    std::cout << "Span constructor called !" << std::endl;
}

Span::~Span()
{
    std::cout << "Span destructor called !" << std::endl;
}

int Span::randInt(unsigned int n)
{
    int i;

    srand((unsigned)time(0));
    i = std::rand() % (n * 4) + 1;
    return (i);
}

void Span::fill()
{
    size_t start;
    int rand;

    start = numbers.size();
    while (start < this->N)
    {
        usleep(50);
        rand = randInt(N);
        numbers.push_back(rand);
        start++;
    }
}

void Span::addNumber(int n)
{
    if (numbers.size() >= this->N)
    {
        throw Span::overFlowException();
    }
    numbers.push_back(n);
}

int Span::shortestSpan() const 
{
    if (numbers.size() <= 1)
        throw Span::logicError();
    std::vector<int> sortedNumbers = numbers;
    std::sort(sortedNumbers.begin(), sortedNumbers.end());

    int minSpan = std::numeric_limits<int>::max();
    for (size_t i = 0; i < sortedNumbers.size(); i ++)
    {
        int span = sortedNumbers[i] - sortedNumbers[i - 1];
        minSpan = std::min(minSpan, span);
    }
    return (minSpan);
}

int Span::longestSpan() const
{
    if (numbers.size() <= 1)
        throw Span::logicError();
    std::vector<int> sortedNumbers = numbers;
    std::sort(sortedNumbers.begin(), sortedNumbers.end());
    int maxSpan = sortedNumbers[sortedNumbers.size() - 1] - sortedNumbers[0]; 
    return (maxSpan);
}

const char * Span::overFlowException::what() const throw()
{
    return ("Maximum number of elements reached");
}

const char * Span::logicError::what() const throw()
{
    return ("Not enough elements to calculate spans");
}