/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmartyny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/24 16:06:28 by pmartyny          #+#    #+#             */
/*   Updated: 2019/06/24 16:06:30 by pmartyny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void print_params(char *str)
{
    int i;
    char c;

    i = 0;
    while (str[i])
    {
        if (str[i] >= 97 && str[i] <= 122)
        {
            c = str[i] - 32;
            std::cout << c;
        }
        else
            std::cout << str[i];
        i++;
    }
}

int main(int argc, char **argv)
{
    int i = 0;
    if (argc == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    }
    while (argv[++i])
    {
        print_params(argv[i]);
    }
    std::cout << std::endl;
}
