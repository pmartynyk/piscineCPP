/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmartyny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 12:59:52 by pmartyny          #+#    #+#             */
/*   Updated: 2019/06/06 12:59:55 by pmartyny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <ostream>
#include <cmath>

class Fixed
{
private:
    int fpValue;
    static int const num; 
public:
    Fixed(void);
    Fixed(int const val);
    Fixed(float const val);
    ~Fixed(void);
    Fixed(Fixed const &val);
    Fixed & operator=(Fixed const &val);
    int getRawBits(void) const;
    void setRawBits(int const val);
    float toFloat(void) const;
    int toInt(void) const;

};

std::ostream  &operator<<(std::ostream &out, Fixed const &val);