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
#include "Form.hpp"

int main() {
    Bureaucrat bureaucratA("Bureaucrat A", 5);
    Bureaucrat bureaucratB("Bureaucrat B", 10);
    Bureaucrat bureaucratC("Bureaucrat C", 100);
    Form formA("Form A", 8, 7);
    Form formB("Form B", 15, 10);
    Form formC("Form C", 90, 80);

    std::cout << std::endl;
    try {
        bureaucratA.signForm(formA);
        std::cout << formA;
        std::cout << std::endl;

        bureaucratB.signForm(formB);
        std::cout << formB;
        std::cout << std::endl;

        bureaucratC.signForm(formA);
        std::cout << formA;
        std::cout << std::endl;

    } catch (const std::exception &e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    try
    {
        bureaucratC.signForm(formC);
        std::cout << formC;
        std::cout << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << "Exception: " << e.what() << '\n';
    }
    

    return 0;
}