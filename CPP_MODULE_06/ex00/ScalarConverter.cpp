/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhennequ <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 19:20:43 by bhennequ          #+#    #+#             */
/*   Updated: 2023/11/07 19:20:44 by bhennequ         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
    std::cout << "ScalarConverter constructor called !" << std::endl;
}

ScalarConverter::ScalarConverter(std::string input): _input(input)
{
    std::cout << "ScalarConverter with input constructor called !" << std::endl;
    this->_double = atof(this->getInput().c_str());
    this->takeInput();
    this->printConvert();
}

ScalarConverter::ScalarConverter(ScalarConverter &copy): _input(copy.getInput())
{
    std::cout << "ScalarConverter copy constructor called !" << std::endl;
    *this = copy;
}

ScalarConverter::~ScalarConverter()
{
    std::cout << "ScalarConverter destructor called !" << std::endl;
}

ScalarConverter& ScalarConverter::operator=(ScalarConverter const &src)
{
    std::cout << "ScalarConverter assignement operator called !" << std::endl;
    if (this == &src)
        return (*this);
    this->_type = src.getType();
    this->_char = src.getChar();
    this->_double = src.getDouble();
    this->_float = src.getFloat();
    this->_int = src.getInt();
    return (*this);
}

int ScalarConverter::checkInput()
{
    if (_input.compare("nan") == 0 || _input.compare("nanf") == 0 || _input.compare("-inf") == 0 ||
            _input.compare("-inff") == 0 || _input.compare("+inf") == 0 || _input.compare("+inff") == 0)
        return (NAN_INF);
    else if (_input.length() == 1)
        return (CHAR);
    else if (_input.find_first_not_of("0123456789-+") == std::string::npos)
    {
        if (_input.find_first_of("-+") != _input.find_last_of("-+"))
            return (ERROR);
        else
            return (INT);
    }
    else if (_input.find_first_not_of("0123456789-+.") == std::string::npos)
    {
        if (_input.find_first_of(".") != _input.find_last_of(".") ||
            _input.find_first_of(".") == 0 ||
            isdigit(_input[_input.find_first_of(".") + 1]) == false)
            return (ERROR);
        else
            return (DOUBLE);
    }
    else if (_input.find_first_not_of("0123456789-+.f") == std::string::npos)
    {
        if (_input.find_first_of("f") != _input.find_last_of("f") ||
            _input[_input.find_first_of("f") + 1] != '\0' ||
            _input.find_first_of(".") != _input.find_last_of(".") ||
            _input.find_first_of(".") == 0)
            return (ERROR);
        else
            return (FLOAT);
    }
    else
        return (ERROR);  
}

void ScalarConverter::convertChar()
{
    this->_char = static_cast<unsigned char>(this->getInput()[1]);
    this->_int = static_cast<int>(this->getChar());
    this->_float = static_cast<float>(this->getChar());
    this->_double = static_cast<double>(this->getChar());
}

void ScalarConverter::convertDouble()
{
    this->_int = static_cast<int>(this->getDouble());
    this->_float = static_cast<float>(this->getDouble());
    this->_char = static_cast<char>(this->getDouble());
}

void ScalarConverter::convertFloat()
{
    this->_float = static_cast<float>(this->getDouble());
    this->_int = static_cast<int>(this->getFloat());
    this->_char = static_cast<char>(this->getFloat());
}

void ScalarConverter::convertInt()
{
    this->_int = static_cast<int>(this->getDouble());
    this->_char = static_cast<unsigned char>(this->getInt());
    this->_float = static_cast<float>(this->getDouble());
}

void ScalarConverter::takeInput()
{
    void (ScalarConverter::*FuncPTR[])(void) = {&ScalarConverter::convertChar, &ScalarConverter::convertInt, &ScalarConverter::convertFloat, &ScalarConverter::convertDouble};
    int type[4] = {CHAR, INT, FLOAT, DOUBLE};

    this->_type = checkInput();

    if (this->getType() == NAN_INF)
        return ;

    int i;
    for (i = 0; i < 4; i++)
    {
        if (type[i] == _type)
        {
            (this->*FuncPTR[i])();
            break ;
        }
    }
    if (i == 4)
        throw(ScalarConverter::ErrorException());
}

void    ScalarConverter::printConvert() const
{
    if (this->getType() != NAN_INF && this->getDouble() <= UCHAR_MAX && this->getDouble() >= 0)
    {
        if (isprint(this->getChar()))
            std::cout << "char: '" << this->getChar() << "'" << std::endl;
        else
            std::cout << "char: Non displayable" << std::endl;
    }
    else
        std::cout << "char: impossible" << std::endl;

    if (this->getType() != NAN_INF && this->getDouble() <= INT_MAX && this->getDouble() >= INT_MIN)
        std::cout << "int: " << this->getInt() << std::endl;
    else
        std::cout << "int: impossible" << std::endl;

    if (this->getType() != NAN_INF)
    {
        std::cout << "float: " << this->getFloat();
        if (this->getInt() - this->getFloat() == 0)
            std::cout << ".0f" << std::endl;
        else
            std::cout << "f" << std::endl;
    }
    else
    {
        if (this->getInput() == "nan" || this->getInput() == "nanf")
            std::cout << "float: nanf" << std::endl;
        else if (this->getInput()[0] == '+')
            std::cout << "float: +inff" << std::endl;
        else
            std::cout << "float: -inff" << std::endl;
    }

    if (this->getType() != NAN_INF)
    {
        std::cout << "double: " << this->getDouble();
        if (this->getDouble() - this->getInt() == 0)
            std::cout << ".0" << std::endl;
        else
            std::cout << std::endl;
    }
    else
    {
        if (this->getInput() == "nan" || this->getInput() == "nanf")
            std::cout << "double: nan" << std::endl;
        else if (this->getInput()[0] == '+')
            std::cout << "double: +inf" << std::endl;
        else
            std::cout << "double: -inf" << std::endl;
    }

}

int ScalarConverter::getType() const
{
    return this->_type;
}

const std::string ScalarConverter::getInput() const
{
    return this->_input;
}

int ScalarConverter::getInt() const
{
    return this->_int;
}

char ScalarConverter::getChar() const
{
    return this->_char;
}

double ScalarConverter::getDouble() const
{
    return this->_double;
}

float   ScalarConverter::getFloat() const
{
    return this->_float;
}

const char* ScalarConverter::ErrorException::what() const throw()
{
    return "Error: Impossible conversion\n";
}