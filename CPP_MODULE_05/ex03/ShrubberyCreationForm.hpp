/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhennequ <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 12:09:47 by bhennequ          #+#    #+#             */
/*   Updated: 2023/11/07 12:09:48 by bhennequ         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once

#include <string>
#include <iostream>
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include <fstream>

class Bureaucrat;

class AForm;

class ShrubberyCreationForm: public AForm
{
    private:
            const std::string _target;
            ShrubberyCreationForm();
    public:
            ShrubberyCreationForm(std::string target);
            ShrubberyCreationForm(ShrubberyCreationForm& copy);

            ~ShrubberyCreationForm();

            ShrubberyCreationForm& operator=(ShrubberyCreationForm const &src);

            void execute(Bureaucrat const &exec) const;
            std::string getTarget() const;
};

std::ostream& operator<<(std::ostream& os, const ShrubberyCreationForm& ppf);