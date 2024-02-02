/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhennequ <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 11:15:03 by bhennequ          #+#    #+#             */
/*   Updated: 2023/11/06 11:15:04 by bhennequ         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): _name("Default"), _grade(150)
{
 //   std::cout << "Bureaucrat default constructor called !" << std::endl;
}

Bureaucrat::Bureaucrat(std::string _name, int _grade): _name(_name)
{
    if (_grade > 150)
        throw(Bureaucrat::GradeTooLowException());
    else if (_grade < 1)
        throw(Bureaucrat::GradeTooHighException());
    else
    {    
        this->_grade = _grade;
        std::cout << "Bureaucrat " << _name << " with grade " << _grade << " has created" << std::endl;
    }
}

Bureaucrat::Bureaucrat(Bureaucrat const &copy): _name(copy.getName() + "_copy")
{
    this->_grade = copy.getGrade();
  //  std::cout << "Copy constructor called !" << std::endl;
}

Bureaucrat::~Bureaucrat()
{
  //  std::cout << "Bureaucrat destructor called !" << std::endl;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& src)
{
  //  std::cout << "Bureaucrat operator called !" << std::endl;
    this->_grade = src.getGrade();
    return *this;
}

void    Bureaucrat::incrementGrade()
{
    if (this->_grade > 1)
    {
            this->_grade--;
            std::cout << "Bureaucrat " << _name << "'s grade incremented. His grade is now " << _grade << std::endl;
    }
    else
        throw(Bureaucrat::GradeTooHighException());
}

void    Bureaucrat::decrementGrade()
{
    if (this->_grade < 150)
    {    
        this->_grade++;
        std::cout << "Bureaucrat " << _name << "'s grade decremented. His grade is now " << _grade << std::endl;
    }
    else
        throw(Bureaucrat::GradeTooLowException());
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
    return "Grade too high ! Can't have grade < 1";
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
    return "Grade too low ! Can't have grade > 150";
}

int Bureaucrat::getGrade() const
{
    return this->_grade;
}

const std::string Bureaucrat::getName() const
{
    return this->_name;
}

void    Bureaucrat::signForm(AForm &AForm)
{
    AForm.beSigned(*this);
}

void    Bureaucrat::executeForm(AForm const &form)
{
    form.execute(*this);
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat *bureaucrat)
{
    os << bureaucrat->getName() << ", bureaucrat grade " << bureaucrat->getGrade() << std::endl;
    return os;
}