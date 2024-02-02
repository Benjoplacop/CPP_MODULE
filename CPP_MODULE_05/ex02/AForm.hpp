/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhennequ <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 14:45:38 by bhennequ          #+#    #+#             */
/*   Updated: 2023/11/06 14:45:40 by bhennequ         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AForm_HPP
#define AForm_HPP

#include <string>
#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"

class Bureaucrat; 

class AForm
{
    protected:
            const std::string _name;
            const int _grade_to_sign;
            const int _grade_to_exec;
            bool      sign;

            AForm();
            AForm(AForm const &copy);
            AForm(std::string name, int grade_to_sign, int grade_to_exec);
            AForm(int grade_to_sign, int grade_to_exec);
    public:

            
            virtual ~AForm();

            AForm& operator=(const AForm &src);

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

            class NotSignedForm: public std::exception
            {
                public:
                        virtual const char* what() const throw();
            };

            void  beSigned(Bureaucrat const &bureaucrat);
            virtual void execute(Bureaucrat const &exec) const = 0;
};

std::ostream& operator<<(std::ostream& os, const AForm& AForm);

#endif
