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

int main(void)
{
    std::cout << "Albert with -989 grade" << std::endl;
    try
    {
        Bureaucrat Albert("Albert", -989);
    }
    catch(Bureaucrat::GradeTooHighException &e)
    {
        std::cerr << e.what() << std::endl;
    }
    catch(Bureaucrat::GradeTooLowException &e)
    {
        std::cerr << e.what() << std::endl;
    }
    std::cout << std::endl;
    std::cout << "Jack with grade 1 but incremented" << std::endl;
    try 
    {
        Bureaucrat Jack("Jack", 1);

        Jack.incrementGrade();
    }
    catch(Bureaucrat::GradeTooHighException &e)
    {
        std::cerr << e.what() << std::endl;
    }
    catch(Bureaucrat::GradeTooLowException &e)
    {
        std::cerr << e.what() << std::endl;
    }
    std::cout << std::endl;
    std::cout << "Joe with 150 grade decremented" << std::endl;
    try
    {
        Bureaucrat Joe("Joe", 150);

        Joe.decrementGrade();
    }
    catch(Bureaucrat::GradeTooHighException &e)
    {
        std::cerr << e.what() << std::endl;
    }
    catch(Bureaucrat::GradeTooLowException &e)
    {
        std::cerr << e.what() << std::endl;
    }
    std::cout << std::endl;
    std::cout << "Vincent with 100 grade increment and decrement" << std::endl;
    try 
    {
        Bureaucrat Vincent("Vincent", 100);

        Vincent.decrementGrade();
        Vincent.incrementGrade();
        for (int i = 0; i < 105; i++)
            Vincent.incrementGrade();
    }
    catch(Bureaucrat::GradeTooHighException &e)
    {
            std::cerr << e.what() << std::endl;
    }
    catch(Bureaucrat::GradeTooLowException &e)
    {
            std::cerr << e.what() << std::endl;
    }
    return (0);

}
