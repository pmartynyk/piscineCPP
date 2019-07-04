/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmartyny <pmartyny@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/04 15:28:41 by pmartyny          #+#    #+#             */
/*   Updated: 2019/07/04 15:59:32 by pmartyny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Array.hpp"
#include <cmath>

int main(void)
{
    srand(time(0));
    int n = rand() % 10;
    Array<int> test(n);
    try
    {
        unsigned int i = 0;
        while (i < test.getSize())
        {
            test[i] = rand() % 100;
            i++;
        }
        i = 0;
        while (i <= test.getSize())
        {
            std::cout << "Array[" << i << "] Content: " << test[i] << std::endl;
            i++;
        }
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    return (0);
}