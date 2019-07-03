/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conv.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmartyny <pmartyny@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/03 09:22:03 by pmartyny          #+#    #+#             */
/*   Updated: 2019/07/03 15:18:12 by pmartyny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <iomanip>

class Conv
{
  private:
    std::string value;
    // char    resChar;
    // int resInt;
    // float   resFloat;
    // double  resDouble;
  public:
    Conv(void);
    Conv(std::string inputValue);
    Conv(Conv &val);
    Conv &operator=(Conv const &val);
    ~Conv(void);

    void convertToChar(void);
    void convertToInt(void);
    void convertToFloat(void);
    void convertToDouble(void);

    class ConversionException : public std::exception
    {
      public:
        ConversionException(void);
        ConversionException(ConversionException const &val);
        ConversionException &operator=(ConversionException const &val);
        ~ConversionException(void) throw();
        virtual const char *what() const throw();
    };
};
