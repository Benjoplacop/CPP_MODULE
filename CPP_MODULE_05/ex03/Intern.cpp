/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhennequ <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 16:30:50 by bhennequ          #+#    #+#             */
/*   Updated: 2023/11/07 16:30:50 by bhennequ         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
    //std::cout << "Intern constructor called !" << std::endl;
}

Intern::Intern(const Intern &copy)
{
    *this = copy;
   // std::cout << "Intern copy constructor called !" << std::endl;
}

Intern::~Intern()
{
    //std::cout << "Intern destructor called !" << std::endl;
}

Intern& Intern::operator=(Intern const &src)
{
   // std::cout << "Intern assignement operator called !" << std::endl;
    if (&src == this)
        return (*this);
    return (*this);
}

static AForm* makeRobot(std::string const target)
{
    return (new RobotomyRequestForm(target));
}

static AForm* makePresident(std::string const target)
{
    return (new PresidentialPardonForm(target));
}

static AForm* makeShrubbery(std::string const target)
{
    return (new ShrubberyCreationForm(target));
}

AForm*    Intern::makeForm(const std::string name, const std::string target)
{
    AForm* (*ptr_make[])(const std::string target) = {&makeRobot, &makePresident, &makeShrubbery};
    std::string levels[3] = {"robotomy request", "president pardon", "shrubbery creation"};

    for (int i = 0; i < 3; i++)
    {
        if (levels[i] == name)
        {
            std::cout << "Inter creates " << name << " ! " << std::endl;
            return (ptr_make[i](target));
        }
    }
    std::cout << "Intern cannot create this Form" << std::endl;
    return (NULL);
}