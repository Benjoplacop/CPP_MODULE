/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhennequ <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 14:45:41 by bhennequ          #+#    #+#             */
/*   Updated: 2023/11/06 14:45:42 by bhennequ         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(): _name("Default"), _grade_to_sign(150), _grade_to_exec(150), sign(false)
{
    std::cout << "Form constructor called !" << std::endl;
}

Form::Form(Form const &copy): _name(copy.getName() + "_copy"),  _grade_to_sign(copy.getGradeToSign()), _grade_to_exec(copy.getGradeToExec()), sign(copy.getSigned())
{
    std::cout << "Form copy constructor called !" << std::endl;
}

Form::Form(std::string name, int grade_to_sign, int grade_to_exec): _name(name), _grade_to_sign(grade_to_sign), _grade_to_exec(grade_to_exec), sign(false)
{
    std::cout << "Form complete constructor called !" << std::endl;
}

Form::Form(int grade_to_sign, int grade_to_exec): _name("Default"), _grade_to_sign(grade_to_sign), _grade_to_exec(grade_to_exec), sign(false)
{
    std::cout << "Form with grade needed constructor called !";
}

Form::~Form()
{
    std::cout << "Form destructor called !" << std::endl;
}

Form& Form::operator=(Form const &src)
{
    this->sign = src.getSigned();
    return (*this);
}

void    Form::beSigned(Bureaucrat const &bureaucrat)
{
    if (this->_grade_to_sign > bureaucrat.getGrade() && this->sign == false)
    {
        this->sign = true;
        std::cout << bureaucrat.getName() << " signed " << this->_name << std::endl;
    }
    else if (this->sign == false)
    {
        throw(Form::GradeTooLowException());
    }
    else
        std::cout << bureaucrat.getName() << " couldn't sign " << this->_name << " because his already signed !" << std::endl;

}

int Form::getGradeToSign() const
{
    return this->_grade_to_sign;
}

int Form::getGradeToExec() const
{
    return this->_grade_to_exec;
}

std::string Form::getName() const
{
    return this->_name;
}

bool Form::getSigned() const
{
    return this->sign;
}

const char* Form::GradeTooHighException::what() const throw()
{
    return "Grade too high !\n";
}

const char* Form::GradeTooLowException::what() const throw()
{
    return "Grade too low !\n";
}

std::ostream& operator<<(std::ostream& os, const Form& form)
{
    os << "Form name: " << form.getName() << std::endl;
    os << "Signed status: " << (form.getSigned() ? "Signed" : "Not signed") << std::endl;
    os << "Grade required to Sign: " << form.getGradeToSign() << std::endl;
    os << "Grade required to Execute: " << form.getGradeToExec() << std::endl;
    return (os);
}