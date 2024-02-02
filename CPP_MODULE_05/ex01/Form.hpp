/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhennequ <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 14:45:38 by bhennequ          #+#    #+#             */
/*   Updated: 2023/11/06 14:45:40 by bhennequ         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <string>
#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"

class Bureaucrat; 

class Form
{
    private:
            const std::string _name;
            const int _grade_to_sign;
            const int _grade_to_exec;
            bool      sign;
    public:
            Form();
            Form(Form const &copy);
            Form(std::string name, int grade_to_sign, int grade_to_exec);
            Form(int grade_to_sign, int grade_to_exec);
            
            ~Form();

            Form& operator=(const Form &src);

            int getGradeToSign() const;
            int getGradeToExec() const;
            std::string getName() const;
            bool  getSigned() const;

            class GradeTooHighException: public std::exception
            {
                public:
                        virtual const char* what() const throw();
            };

            class GradeTooLowException: public std::exception
            {
                public:
                        virtual const char* what() const throw();
            };

            void  beSigned(Bureaucrat const &bureaucrat);
};

std::ostream& operator<<(std::ostream& os, const Form& form);

#endif
