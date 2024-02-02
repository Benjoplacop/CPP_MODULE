/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhennequ <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 12:09:58 by bhennequ          #+#    #+#             */
/*   Updated: 2023/11/07 12:09:58 by bhennequ         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): AForm("PresidentialPardonForm", 25, 5), _target("default")
{
  //  std::cout << "PresidentialPardonForm constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target): AForm("PresidentialPardonForm", 25, 5), _target(target)
{
  //  std::cout << "PresidentialPardonForm constructor with target called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm &ppf): AForm("PresidentialPardonForm", 25, 5), _target(ppf.getTarget())
{
  //  std::cout << "PresidentialPardonForm copy constructor called" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
 //   std::cout << "PresidentialPardonForm destructor called" << std::endl;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(PresidentialPardonForm const &src)
{
 //   std::cout << "PresidentialPardonForm Assignation operator called" << std::endl;
    if (&src == this)
        return (*this);
    return (*this);
}

void PresidentialPardonForm::execute(Bureaucrat const &exec) const
{
    if (exec.getGrade() > this->getGradeToExec())
        throw(AForm::GradeTooLowException());
    else if (this->getSigned() == false)
        throw(AForm::NotSignedForm());
    else
    {
        std::cout << exec.getName() << " execute " << this->getName() << std::endl;
        std::cout << getTarget() << " has been pardoned by Zaphod Beeblebrox" << std::endl;
    }

}

std::string PresidentialPardonForm::getTarget(void) const
{
    return this->_target;
}

std::ostream& operator<<(std::ostream& os, const PresidentialPardonForm& ppf)
{
    os << "PresidentialPardonForm name: " << ppf.getName() << std::endl;
    os << "Signed status: " << (ppf.getSigned() ? "Signed" : "Not signed") << std::endl;
    os << "Grade required to Sign: " << ppf.getGradeToSign() << std::endl;
    os << "Grade required to Execute: " << ppf.getGradeToExec() << std::endl;
    return (os);
}