/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhennequ <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 16:30:52 by bhennequ          #+#    #+#             */
/*   Updated: 2023/11/07 16:30:53 by bhennequ         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include <string>
#include <iostream>


class Bureaucrat;

class AForm;

class PresidentialPardonForm;

class RobottomyRequest;

class ShrubberyCreationForm;

class Intern
{
    public:

        Intern();
        Intern(const Intern &copy);
        ~Intern();

        Intern& operator=(Intern const &src);

        AForm    *makeForm(const std::string name, const std::string target);
};
