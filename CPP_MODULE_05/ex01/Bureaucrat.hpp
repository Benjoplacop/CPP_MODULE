/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhennequ <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 11:15:00 by bhennequ          #+#    #+#             */
/*   Updated: 2023/11/06 11:15:02 by bhennequ         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <iostream>
#include <stdexcept>
#include "Form.hpp"

class Form;

class Bureaucrat 
{
    private:
            const std::string _name;
            int   _grade;
    public: 
            Bureaucrat();
            Bureaucrat(Bureaucrat const &copy);
            Bureaucrat(std::string _name, int _grade);
            Bureaucrat& operator=(Bureaucrat const& src);

            ~Bureaucrat();

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

            void    incrementGrade(void);
            void    decrementGrade(void);
            const std::string getName() const;
            int               getGrade() const;

            void    signForm(Form &form);
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat *bureaucrat);

#endif
