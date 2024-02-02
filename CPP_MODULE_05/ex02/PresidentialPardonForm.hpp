/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhennequ <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 12:10:00 by bhennequ          #+#    #+#             */
/*   Updated: 2023/11/07 12:10:01 by bhennequ         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once

#include <string>
#include <iostream>
#include "Bureaucrat.hpp"
#include "AForm.hpp"

class Bureaucrat;

class AForm;

class PresidentialPardonForm: public AForm
{
    private: 
            PresidentialPardonForm();
            const std::string _target;
    public:
            PresidentialPardonForm(std::string target);
            PresidentialPardonForm(PresidentialPardonForm &ppf);

            ~PresidentialPardonForm();

            PresidentialPardonForm& operator=(PresidentialPardonForm const &src);

            void execute(Bureaucrat const &exec) const;
            std::string getTarget(void) const;
};

std::ostream& operator<<(std::ostream& os, const PresidentialPardonForm& ppf);