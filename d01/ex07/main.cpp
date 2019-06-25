/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmartyny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/25 18:22:47 by pmartyny          #+#    #+#             */
/*   Updated: 2019/06/25 18:22:48 by pmartyny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

void replaceString(std::string *str, std::string from, std::string to)
{
    std::string res;
    size_t pos;

    pos = 0;
    while (pos < str->length())
    {
        pos = str->find(from);
        if (pos < str->length())
            str->replace(pos, from.length(), to);
    }
}

int         main(int argc, char**argv)
{
    std::string line;
    std::string res;
    
    if (argc != 4)
    {
        std::cout << "Enter correct input data (FILENAME | string1 | string2)";
        return (0);
    }
    if (!strcmp(argv[1], "\0") || !strcmp(argv[2], "\0") || !strcmp(argv[3], "\0"))
    {
        std::cout << "Enter correct input data (FILENAME | string1 | string2)";
        return (0);
    }
    
    std::ifstream file;
    file.open (argv[1], std::ios::in);
    if (file.is_open())
    {
        while (std::getline(file, line))
        {
            res.append(line);
        }
    }
    replaceString(&res, argv[2], argv[3]);

    std::string		output = (std::string)argv[1] + ".replace";
    std::ofstream	file_out(output);
    file_out << res;
    file.close();
    file_out.close();

    return (0);    
}
