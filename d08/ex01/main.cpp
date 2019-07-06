/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmartyny <pmartyny@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/05 15:05:09 by pmartyny          #+#    #+#             */
/*   Updated: 2019/07/05 16:07:42 by pmartyny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>
#include <random>
#include "span.hpp"

int main(int ac, char **av)
{
    if (ac != 2)
    {
        return (0);
    }

    unsigned int i = atoi(av[1]);
    srand(time(0));

    span test(i);
    unsigned int x = 0;
    int y = 0;

    while (x < i)
    {
        y = rand();
        test.addNumber(y);
        std::cout << y << " ";
        x++;
    }

    try
    {
        std::cout << std::endl
                  << std::endl
                  << "Smallest value in storage: " << test.shortestSpan() << std::endl
                  << "Largest value in storage: " << test.longestSpan() << std::endl
                  << std::endl;
    }
    catch (span::ExceptionFullSpan &e)
    {
        std::cout << e.what() << std::endl;
    }
    catch (span::ExceptionEmptySpan &e)
    {
        std::cout << e.what() << std::endl;
    }

    catch (const std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    try
    {
        test.addNumber(rand() % 10000);
    }
    catch (span::ExceptionFullSpan &e)
    {
        std::cout << e.what() << std::endl;
    }
    catch (span::ExceptionEmptySpan &e)
    {
        std::cout << e.what() << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cout << "WTF?" << std::endl;
    }

    return (0);
}