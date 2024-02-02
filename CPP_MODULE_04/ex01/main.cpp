/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhennequ <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 14:31:55 by bhennequ          #+#    #+#             */
/*   Updated: 2023/10/04 14:31:56 by bhennequ         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"


int main()
{
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    delete i;
    delete j;
 
    std::cout << std::endl;
    const Animal *animal_array[10];

    for (int i = 0; i < 10; i++)
    {
        if (i % 2 == 0)
            animal_array[i] = new Dog();
        else
            animal_array[i] = new Cat();
        std::cout << std::endl;
    }

    for (int i = 0; i < 10; i++)
    {
        animal_array[i]->makeSound();
        std::cout << animal_array[i]->getType() << std::endl;
    }

    for (int i = 0; i < 10; i++)
    {
        delete animal_array[i];
        std::cout << std::endl;
    }

    Dog nasus;
    Cat yuumi;

    Dog& nasus_ref = nasus;
    Cat& yuumi_ref = yuumi;

    std::cout << std::endl;
    std::cout << "Creating copy !" << std::endl;
    Dog nasus_copy(nasus_ref);
    Cat yuumi_copy(yuumi_ref);

    Dog& nasus_copy_ref = nasus_copy;
    Cat& yuumi_copy_ref = yuumi_copy;

    nasus.compare(nasus_copy_ref);
    yuumi.compare(yuumi_copy_ref);

    return 0;
}