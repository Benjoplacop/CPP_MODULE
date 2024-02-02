/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhennequ <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 11:14:57 by bhennequ          #+#    #+#             */
/*   Updated: 2023/11/06 11:14:58 by bhennequ         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main()
{
    try {
        Bureaucrat jarvis("Jarvis", 5);
        Bureaucrat jarvan("Jarvan", 1);

        AForm* shub;
        Intern aRandom;

        shub = aRandom.makeForm("shrubbery creation", "Bender");
        jarvis.signForm(*shub);
        jarvan.executeForm(*shub);
        delete shub;
    }
    catch (const std::exception &e)
    {
        std::cerr << "Exception: " << e.what() << std::endl;
    }
    std::cout << std::endl;
    try
    {
        Bureaucrat jarvan("Jarvan", 150);

        RobotomyRequestForm formA("home");

        jarvan.signForm(formA);
    }
    catch (const std::exception &e)
    {
        std::cerr << "Jarvan try to sign form but " << e.what() << std::endl;
    }
    std::cout << std::endl;
    try
    {
        Bureaucrat jarvis("Jarvis", 44);

        RobotomyRequestForm formA("Roboooot");

        jarvis.signForm(formA);
        jarvis.executeForm(formA);
        jarvis.executeForm(formA);
    }
    catch (const std::exception &e)
    {
        std::cerr << "Jarvis try to sign form but " << e.what() << std::endl;
    }
    std::cout << std::endl;
    try
    {
        Bureaucrat jarvis("Jarvis", 4);
        Bureaucrat jarvan("Jarvan", 10);

        PresidentialPardonForm  formA("Pardon");

        jarvan.signForm(formA);
        jarvis.executeForm(formA);
        jarvan.executeForm(formA);
    }
    catch (const std::exception &e)
    {
        std::cerr << "Jarvis try to sign form but " << e.what() << std::endl;
    }
    return (0);
}