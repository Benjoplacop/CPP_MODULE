/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhennequ <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 12:09:49 by bhennequ          #+#    #+#             */
/*   Updated: 2023/11/07 12:09:50 by bhennequ         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(): AForm("RobotomyRequestForm", 72, 45), _target("default")
{
 //   std::cout << "RobotomyRequestForm constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target): AForm("RobotomyRequestForm", 72, 45), _target(target)
{
  //  std::cout << "RobotomyRequestForm constructor with target called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm& copy): AForm("RobotomyRequestForm", 72, 45), _target(copy.getTarget())
{
  //  std::cout << "RobotomyRequestForm copy constructor called" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
 //   std::cout << "RobotomyRequestForm destructor called" << std::endl;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(RobotomyRequestForm const &src)
{
    //std::cout << "RobotomyRequestForm assignement operator called" << std::endl;
    if (&src == this)
        return (*this);
    return *this;
}

std::string RobotomyRequestForm::getTarget() const
{
    return this->_target;
}

static int robot = 0;

void   RobotomyRequestForm::execute(Bureaucrat const &exec) const
{
    if (exec.getGrade() > this->getGradeToExec())
        throw(AForm::GradeTooLowException());
    else if (this->getSigned() == false)
        throw(AForm::NotSignedForm());
    else
    {
        std::cout << exec.getName() << " execute " << this->getName() << std::endl;
        robot++;
        if (robot % 2 == 0)
            std::cout << this->getTarget() << " has been robotomized successfully !" << std::endl;
        else
            std::cout << "BBBBBBBRRRRRRRRRRRRRRRRRRR ROBOTOMIZED FAILED !" << std::endl;
    }
}

std::ostream& operator<<(std::ostream& os, const RobotomyRequestForm& ppf)
{
    os << "PresidentialPardonForm name: " << ppf.getName() << std::endl;
    os << "Signed status: " << (ppf.getSigned() ? "Signed" : "Not signed") << std::endl;
    os << "Grade required to Sign: " << ppf.getGradeToSign() << std::endl;
    os << "Grade required to Execute: " << ppf.getGradeToExec() << std::endl;
    return (os);
}