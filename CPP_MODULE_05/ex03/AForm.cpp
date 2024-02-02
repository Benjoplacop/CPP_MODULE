/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhennequ <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 14:45:41 by bhennequ          #+#    #+#             */
/*   Updated: 2023/11/06 14:45:42 by bhennequ         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(): _name("Default"), _grade_to_sign(150), _grade_to_exec(150), sign(false)
{
 //   std::cout << "AForm constructor called !" << std::endl;
}

AForm::AForm(AForm const &copy): _name(copy.getName() + "_copy"), _grade_to_sign(copy.getGradeToSign()), _grade_to_exec(copy.getGradeToExec()), sign(copy.getSigned())
{
 //   std::cout << "AForm copy constructor called !" << std::endl;
}

AForm::AForm(std::string name, int grade_to_sign, int grade_to_exec): _name(name), _grade_to_sign(grade_to_sign), _grade_to_exec(grade_to_exec), sign(false)
{
  //  std::cout << "AForm complete constructor called !" << std::endl;
}

AForm::AForm(int grade_to_sign, int grade_to_exec): _name("Default"), _grade_to_sign(grade_to_sign), _grade_to_exec(grade_to_exec), sign(false)
{
 //   std::cout << "AForm with grade needed constructor called !";
    if (this->getGradeToSign() > 150 || this->getGradeToExec() > 150)
        throw(AForm::GradeTooLowException());
    else if (this->getGradeToSign() < 1 || this->getGradeToExec() < 1)
        throw(AForm::GradeTooHighException());
}

AForm::~AForm()
{
 //   std::cout << "AForm destructor called !" << std::endl;
}

AForm& AForm::operator=(AForm const &src)
{
    this->sign = src.getSigned();
    return (*this);
}

void    AForm::beSigned(Bureaucrat const &bureaucrat)
{
    if (this->_grade_to_sign > bureaucrat.getGrade() && this->sign == false)
    {
        this->sign = true;
        std::cout << bureaucrat.getName() << " signed " << this->_name << std::endl;
    }
    else if (this->_grade_to_sign < bureaucrat.getGrade())
    {
        throw(AForm::GradeTooLowException());
    }
    else
        std::cout << bureaucrat.getName() << " couldn't sign " << this->_name << " because his already signed !" << std::endl;

}

int AForm::getGradeToSign() const
{
    return this->_grade_to_sign;
}

int AForm::getGradeToExec() const
{
    return this->_grade_to_exec;
}

std::string AForm::getName() const
{
    return this->_name;
}

bool AForm::getSigned() const
{
    return this->sign;
}

const char* AForm::GradeTooHighException::what() const throw()
{
    return "Grade too high !\n";
}

const char* AForm::GradeTooLowException::what() const throw()
{
    return "Grade too low !\n";
}

const char* AForm::NotSignedForm::what() const throw()
{
    return "Form is not signed!\n";
}

std::ostream& operator<<(std::ostream& os, const AForm& AForm)
{
    os << "AForm name: " << AForm.getName() << std::endl;
    os << "Signed status: " << (AForm.getSigned() ? "Signed" : "Not signed") << std::endl;
    os << "Grade required to Sign: " << AForm.getGradeToSign() << std::endl;
    os << "Grade required to Execute: " << AForm.getGradeToExec() << std::endl;
    return (os);
}