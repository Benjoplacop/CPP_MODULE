/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhennequ <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 13:19:32 by bhennequ          #+#    #+#             */
/*   Updated: 2023/09/22 13:19:33 by bhennequ         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>


int main(int argc, char **argv)
{
    if (argc != 4)
    {
        std::cerr << "Usage: " << argv[0] << "<filename> <s1> <s2>" << std::endl;
        return (1);
    }
    std::string filename = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];

    std::ifstream   ifs(filename.c_str());
    if (!ifs.is_open())
    {
        std::cerr << "Can't open this file." << std::endl;
        return (1);
    }

    std::string new_filename = filename + ".replace";

    std::ofstream  ofs(new_filename.c_str());
    if (!ofs.is_open())
    {
        std::cerr << "Can't open new file." << std::endl;
        return (1);
    }

    size_t    pos;
    std::string line;

    while(std::getline(ifs,line))
    {
        std::string modified_line = line;
        std::string tmp;
        pos = line.find(s1);
        while(pos != std::string::npos)
        {
            modified_line.replace(pos, s1.size(), s2);
            pos = line.find(s1, pos + s2.size());
        }
        ofs << modified_line << std::endl;
    }

    ifs.close();
    ofs.close();

    std::cout << "Line has been replaced." << std::endl;
    return (0);
}
