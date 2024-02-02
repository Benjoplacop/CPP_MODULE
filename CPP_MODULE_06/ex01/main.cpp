/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhennequ <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 11:59:34 by bhennequ          #+#    #+#             */
/*   Updated: 2023/11/09 11:59:35 by bhennequ         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main() {
    Data originalData;
    originalData.name = "John";
    originalData.value = 42;
    originalData.next = NULL;

    Data* originalPtr = &originalData;

    Serializer serializer;
    
    uintptr_t serialized = serializer.serialize(originalPtr);

    Data* deserializedPtr = serializer.deserialize(serialized);

    if (originalPtr == deserializedPtr) {
        std::cout << "La désérialisation a réussi, les pointeurs correspondent." << std::endl;
        std::cout << "Nom d'origine : " << originalData.name << std::endl;
        std::cout << "Valeur d'origine : " << originalData.value << std::endl;
    } else {
        std::cout << "La désérialisation a échoué, les pointeurs ne correspondent pas." << std::endl;
    }

    return 0;
}
