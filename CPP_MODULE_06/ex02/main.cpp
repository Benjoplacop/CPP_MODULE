/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhennequ <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 13:51:36 by bhennequ          #+#    #+#             */
/*   Updated: 2023/11/09 13:51:37 by bhennequ         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include "Base.hpp"

#include <cstdlib>
#include <cstdio>
#include <ctime>

Base *generate(void)
{
    int random = std::rand() % 3;
    switch(random)
    {
        case 0:
                return (new A());
        case 1:
                return (new B());
        case 2:
                return (new C());
        default:
        {
            std::cout << "Random generator fucked up" << std::endl;
            return (NULL);
        }
    }
}

void identify(Base* p)
{
    if (dynamic_cast<A*>(p))
        std::cout << "Type: A" << std::endl;
    else if (dynamic_cast<B*>(p))
        std::cout << "Type: B" << std::endl;
    else if (dynamic_cast<C*>(p))
        std::cout << "Type: C" << std::endl;
    else
        std::cout << "Type: Unknow" << std::endl;
}

void identify(Base& p)
{
    try
    {
        A& a = dynamic_cast<A&>(p);
        std::cout << "Type: A" << std::endl;
        (void) a;
    }
    catch(const std::exception& e){}
    try
    {
        B& b = dynamic_cast<B&>(p);
        std::cout << "Type: B" << std::endl;
        (void) b;
    }
    catch(const std::exception& e){}
    try
    {
        C& c = dynamic_cast<C&>(p);
        std::cout << "Type: C" << std::endl;
        (void) c;
    }
    catch(const std::exception &e){}
}

int main()
{
    srand(time(NULL));

    Base* a = generate();
    Base* b = generate();
    Base* c = generate();
    Base* d = generate();
    Base* e = generate();

    std::cout << "A = "; identify(a);
    std::cout << "A& = "; identify(*a);
    std::cout << std::endl;

    std::cout << "B = "; identify(b);
    std::cout << "B& = "; identify(*b);
    std::cout << std::endl;

    std::cout << "C = "; identify(c);
    std::cout << "C& = "; identify(*c);
    std::cout << std::endl;

    std::cout << "D = "; identify(d);
    std::cout << "D& = ";  identify(*d);
    std::cout << std::endl;

    std::cout << "E = "; identify(e);
    std::cout << "E& = "; identify(*e);
    std::cout << std::endl;

    delete a;
    delete b;
    delete c;
    delete d;
    delete e;

    return 0;
}