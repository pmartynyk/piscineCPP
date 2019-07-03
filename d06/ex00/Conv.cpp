/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conv.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmartyny <pmartyny@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/03 09:21:58 by pmartyny          #+#    #+#             */
/*   Updated: 2019/07/03 15:25:38 by pmartyny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conv.hpp"

Conv::Conv(void)
{
}

Conv::Conv(std::string value) : value(value)
{
}

Conv::Conv(Conv &val)
{
    *this = val;
}

Conv &Conv::operator=(Conv const &val)
{
    if (this != &val)
        this->value = val.value;
    return *this;
}

Conv::~Conv(void)
{
}

void Conv::convertToChar(void)
{
    try
    {
        std::cout << "char: ";
        int ret;
        ret = std::stoi(this->value);
        if (ret <= 33 || ret >= 126)
            std::cout << "Non displayable" << std::endl;
        else
            std::cout << static_cast<char>(ret) << std::endl;
    }
    catch (const std::exception &e)
    {
        throw ConversionException();
    }
}

void Conv::convertToInt(void)
{
    try
    {
        std::cout << "int: ";
        std::cout << static_cast<int>(std::stoi(this->value)) << std::endl;
    }
    catch (const std::exception &e)
    {
        throw ConversionException();
    }
}

void Conv::convertToFloat(void)
{
    try
    {
        float ret;
        std::cout << "float: ";
        ret = std::stof(this->value);
        std::cout << std::fixed;
        std::cout.precision(1);
        std::cout << static_cast<float>(ret) << "f" << std::endl;
    }
    catch (const std::exception &e)
    {
        throw ConversionException();
    }
}

void Conv::convertToDouble(void)
{
    try
    {
        double ret = 0.0;
        std::cout << "double: ";
        ret = std::stod(this->value);
        std::cout << std::fixed;
        std::cout.precision(1);
        std::cout << static_cast<double>(ret) << std::endl;
    }
    catch (const std::exception &e)
    {
        throw ConversionException();
    }
}

Conv::ConversionException::ConversionException(void)
{
}

Conv::ConversionException::ConversionException(ConversionException const &val)
{
    *this = val;
}

Conv::ConversionException &Conv::ConversionException::operator=(ConversionException const &val)
{
    (void)val;
    return *this;
}
Conv::ConversionException::~ConversionException(void) throw()
{
}

const char *Conv::ConversionException::what(void) const throw()
{
    return "Imposible conversion!";
}