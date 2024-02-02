/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhennequ <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 12:09:55 by bhennequ          #+#    #+#             */
/*   Updated: 2023/11/07 12:09:56 by bhennequ         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>
#include "Bureaucrat.hpp"
#include "AForm.hpp"

class Bureaucrat;

class AForm;

class RobotomyRequestForm: public AForm
{
    private:
            const std::string _target;
            RobotomyRequestForm();
    public:
            RobotomyRequestForm(std::string target);
            RobotomyRequestForm(RobotomyRequestForm& copy);

            ~RobotomyRequestForm();

            RobotomyRequestForm& operator=(RobotomyRequestForm const &src);

            void execute(Bureaucrat const &exec) const;
            std::string getTarget() const;
};


std::ostream& operator<<(std::ostream& os, const RobotomyRequestForm& ppf);