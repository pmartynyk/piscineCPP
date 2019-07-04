/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmartyny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/25 18:24:31 by pmartyny          #+#    #+#             */
/*   Updated: 2019/06/25 18:24:33 by pmartyny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>
#include <cerrno>

int main(int argc, char **argv)
{
    std::string line = "";
    size_t x;
    x = 1;
    while (argc == 1)
    {
        std::getline(std::cin, line);
        if (std::cin.eof())
        {
            std::cout << line << std::endl;
            break;
        }
        std::cout << line << std::endl;
    }
    size_t i = 1;
    if (argc > 1)
    {
        while (i < argc)
        {
            line = argv[i];
            if (!line.compare("-"))
            {
                while (x)
                {
                    std::getline(std::cin, line);
                    if (!std::cin.eof())
                    {
                        std::cout << line << std::endl;
                    }
                    if (std::cin.eof())
                        x = 0;
                }
            }
            else
            {
                std::ifstream fileIn;
                fileIn.open(line, std::ios::in);
                if (fileIn.is_open())
                {
                    while (std::getline(fileIn, line))
                    {
                        std::cout << line << std::endl;
                    }
                    line = "";
                }
                else
                {
                    std::cout << strerror(errno) << std::endl;
                }
                fileIn.close();
            }
            i++;
            x = 1;
        }
    }
    return (0);
}
