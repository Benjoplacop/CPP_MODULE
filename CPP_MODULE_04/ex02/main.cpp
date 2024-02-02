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

#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    const AAnimal* j = new Dog();
    const AAnimal* i = new Cat();

    delete i;
    delete j;
 
    std::cout << std::endl;
    const AAnimal *AAnimal_array[10];

    for (int i = 0; i < 10; i++)
    {
        if (i % 2 == 0)
            AAnimal_array[i] = new Dog();
        else
            AAnimal_array[i] = new Cat();
        std::cout << std::endl;
    }

    for (int i = 0; i < 10; i++)
    {
        AAnimal_array[i]->makeSound();
        std::cout << AAnimal_array[i]->getType() << std::endl;
    }

    for (int i = 0; i < 10; i++)
    {
        delete AAnimal_array[i];
        std::cout << std::endl;
    }

    Dog nasus;
    Cat yuumi;

    Dog& nasus_ref = nasus;
    Cat& yuumi_ref = yuumi;

    std::cout << "Creating copy !" << std::endl;
    Dog nasus_copy(nasus_ref);
    Cat yuumi_copy(yuumi_ref);

    Dog& nasus_copy_ref = nasus_copy;
    Cat& yuumi_copy_ref = yuumi_copy;

    nasus.compare(nasus_copy_ref);
    yuumi.compare(yuumi_copy_ref);

    return 0;
}