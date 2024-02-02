/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhennequ <bhennequ@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 11:38:33 by bhennequ          #+#    #+#             */
/*   Updated: 2023/11/21 19:32:52 by bhennequ         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitCoin::BitCoin()
{
    std::cout << "Constructor called !" << std::endl;
    std::string const filename = "./data.csv";
    std::ifstream file(filename.c_str());
    if (!file.is_open())
    {    
        std::cerr << "Error opening file: " << filename << std::endl;
        throw openFileException();
    }
    std::string line;
    while (std::getline(file, line))
    {
        std::istringstream iss(line);
        std::string date;
        float exchangeRate;
        if (std::getline(iss, date, ','))
        {
            if (iss >> exchangeRate)
                data[date] = exchangeRate;
        }
        else
            throw openFileException();
    }
    file.close();
}

BitCoin::BitCoin(BitCoin const &copy)
{
    std::cout << "Copy constructor called !" << std::endl;
    *this = copy;
}

BitCoin::~BitCoin()
{
    std::cout << "Destructor called !" << std::endl;
}

BitCoin& BitCoin::operator=(BitCoin const &src)
{
    this->data = src.data;
    return (*this);
}

const char* BitCoin::openFileException::what() const throw()
{
    return "Can't open this file !";
}

int testDate(std::string const &date)
{
    int year, month, day;
    char dash1, dash2;

    std::istringstream dateStream(date);
    dateStream >> year >> dash1 >> month >> dash2 >> day;
    if ((month > 12 || month < 1) || (day < 1 || day > 31) || (year > 2023))
        return 0;
    return 1;
}

int testValue(float const &value)
{
    if (value > 1000 || value < 0)
        return 0;
    return 1;
}

std::string findClosestDate(std::string const &date, const std::map<std::string, float>& data)
{
    std::string newDate = date;
    std::string modifiedDate = date;
    while (data.find(newDate) == data.end() && data.find(modifiedDate) == data.end())
    {
        std::string::size_type yearPosModified = modifiedDate.find('-');
        std::string::size_type monthPosModified = modifiedDate.find('-', yearPosModified + 1);

        int yearModified = atoi(modifiedDate.substr(0, yearPosModified).c_str());
        int monthModified = atoi(modifiedDate.substr(yearPosModified + 1, monthPosModified - yearPosModified - 1).c_str());
        int dayModified = atoi(modifiedDate.substr(monthPosModified + 1).c_str());

        std::string::size_type yearPosNew = newDate.find('-');
        std::string::size_type monthPosNew = newDate.find('-', yearPosNew + 1);

        int yearNew = atoi(newDate.substr(0, yearPosNew).c_str());
        int monthNew = atoi(newDate.substr(yearPosNew + 1, monthPosNew - yearPosNew - 1).c_str());
        int day2New = atoi(newDate.substr(monthPosNew + 1).c_str());

        if (dayModified < 31)
            dayModified++;
        else
        {
            dayModified = 1;
            monthModified++;
        }

        if (day2New > 1)
            day2New--;
        else
        {
            day2New = 31;
            monthNew--;
        }

        std::stringstream ssModified;
        ssModified << yearModified << '-' << (monthModified < 10 ? "0" : "") << monthModified << '-' << (dayModified < 10 ? "0" : "") << dayModified;
        modifiedDate = ssModified.str();

        std::stringstream ssNew;
        ssNew << yearNew << '-' << (monthNew < 10 ? "0" : "") << monthNew << '-' << (day2New < 10 ? "0" : "") << day2New;
        newDate = ssNew.str();
    }

    if (data.find(newDate) != data.end())
        return newDate;
    else
        return modifiedDate;
}

void BitCoin::takeInput(std::string const &filename)
{
    std::ifstream file(filename.c_str());
    if (!file.is_open())
    {
        std::cerr << "Error opening file:" << filename << std::endl;
        throw openFileException();
    }
    std::string line;
    while (std::getline(file, line))
    {
        std::istringstream iss(line);
        std::string date;
        float value;

        if (std::getline(iss, date, '|'))
        {
            iss >> value;
            if (testDate(date) && testValue(value))
            {
                if (!date.empty())
                    date = date.substr(0, date.size() - 1);
                std::map<std::string, float>::const_iterator it = this->data.find(date);
                if (it != this->data.end())
                {
                    float baseValue = it->second * value;
                    std::cout << date << " => " << value << " = " << std::fixed << std::setprecision(2) << baseValue << std::endl;
                }
                else
                {
                    std::string closestDate = findClosestDate(date, data);
                    std::map<std::string, float>::const_iterator it = this->data.find(closestDate);
                    float baseValue = it->second * value;
                    std::cout << date << " => " << value << " = " << std::fixed << std::setprecision(2) << baseValue << std::endl;
                }
            }
            else if (testValue(value))
            {
                std::cout << "Error: bad input => " << date << std::endl;
            }
            else
            {
                if (value < 0)
                    std::cout << "Error: not a positive number." << std::endl;
                else
                    std::cout << "Error: too large a number." << std::endl;
            }
        }
    }
    file.close();
}