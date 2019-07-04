/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmartyny <pmartyny@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/03 09:22:07 by pmartyny          #+#    #+#             */
/*   Updated: 2019/07/04 15:23:10 by pmartyny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Conv.hpp"

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cout << "You need enter one parameter!" << std::endl;
    }
    else
    {
        Conv conv(argv[1]);
        try
        {
            conv.convertToChar();
        }
        catch (Conv::ConversionException &e)
        {
            std::cout << e.what() << std::endl;
        }
        catch (const std::exception &e)
        {
            std::cerr << e.what() << '\n';
        }

        try
        {
            conv.convertToInt();
        }
        catch (Conv::ConversionException &e)
        {
            std::cout << e.what() << std::endl;
        }
        catch (const std::exception &e)
        {
            std::cerr << e.what() << '\n';
        }

        try
        {
            conv.convertToFloat();
        }
        catch (Conv::ConversionException &e)
        {
            std::cout << e.what() << std::endl;
        }
        catch (const std::exception &e)
        {
            std::cerr << e.what() << '\n';
        }

        try
        {
            conv.convertToDouble();
        }
        catch (Conv::ConversionException &e)
        {
            std::cout << e.what() << std::endl;
        }
        catch (const std::exception &e)
        {
            std::cerr << e.what() << '\n';
        }
    }

    return 0;
}
