/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhennequ <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 12:09:42 by bhennequ          #+#    #+#             */
/*   Updated: 2023/11/07 12:09:43 by bhennequ         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(): AForm("ShrubberyCreationForm", 145, 137), _target("default")
{
   // std::cout << "ShrubberyCreationForm constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): AForm("ShrubberyCreationForm", 145, 137), _target(target)
{
  //  std::cout << "ShrubberyCreationForm with target constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm& copy): AForm("ShrubberyCreationForm", 145, 137), _target(copy.getTarget())
{
  //  std::cout << "ShrubberyCreationForm copy constructor called" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
  //  std::cout << "ShrubberyCreationForm destructor called" << std::endl;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(ShrubberyCreationForm const &src)
{
   // std::cout << "ShrubberyCreationForm assignement operator called" << std::endl;
    if (&src == this)
        return (*this);
    return *this;
}

std::string ShrubberyCreationForm::getTarget() const
{
    return this->_target;
}

void    ShrubberyCreationForm::execute(Bureaucrat const &exec) const
{
    if (exec.getGrade() > this->getGradeToExec())
        throw(AForm::GradeTooLowException());
    else if (this->getSigned() == false)
        throw(AForm::NotSignedForm());
    else
    {
        std::cout << exec.getName() << " execute " << this->getName() << std::endl;
        std::string filename = this->getTarget() + "_shruberry";
        std::ofstream ofs(filename.c_str());
        if (!ofs.is_open())
        {
            std::cerr << "Can't open this file !" << std::endl;
            return ;
        }
        ofs << "      _-_" << std::endl;
        ofs << "   /~~   ~~\\ " << std::endl;
        ofs << " /~~        ~~\\ " << std::endl;
        ofs << "{              }" << std::endl;
        ofs << "  \\ __     __ /" << std::endl;
        ofs << "      \\\\ //   " << std::endl;
        ofs << "       | |    " << std::endl;
        ofs << "       | |    " << std::endl;
        ofs.close();
        std::cout << "Shruberry creation is successful !" << std::endl;
    }
}

std::ostream& operator<<(std::ostream& os, const ShrubberyCreationForm& ppf)
{
    os << "PresidentialPardonForm name: " << ppf.getName() << std::endl;
    os << "Signed status: " << (ppf.getSigned() ? "Signed" : "Not signed") << std::endl;
    os << "Grade required to Sign: " << ppf.getGradeToSign() << std::endl;
    os << "Grade required to Execute: " << ppf.getGradeToExec() << std::endl;
    return (os);
}
