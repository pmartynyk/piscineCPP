/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conv.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmartyny <pmartyny@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/03 09:22:03 by pmartyny          #+#    #+#             */
/*   Updated: 2019/07/04 15:23:02 by pmartyny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>

class Conv
{
  private:
    std::string value;

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
