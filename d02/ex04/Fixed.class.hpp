/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmartyny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/26 18:54:23 by pmartyny          #+#    #+#             */
/*   Updated: 2019/06/26 18:54:24 by pmartyny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <ostream>
#include <cmath>
#include <string>
#include <istream>
#include <ostream>
#include <cstdlib>

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

    bool operator==(Fixed const &val);
    bool operator!=(Fixed const &val);
    bool operator>(Fixed const &val);
    bool operator>=(Fixed const &val);
    bool operator<(Fixed const &val);
    bool operator<=(Fixed const &val);

    Fixed operator+(Fixed const &val);
    Fixed operator-(Fixed const &val);
    Fixed operator*(Fixed const &val);
    Fixed operator/(Fixed const &val);

    Fixed &operator++(void);
    Fixed operator++(int val);
    Fixed &operator--(void);
    Fixed operator--(int val);

    static Fixed const & min(Fixed const & val1, Fixed const & val2);
    static Fixed const & max(Fixed const & val1, Fixed const & val2);
    static Fixed & min(Fixed & val1, Fixed & val2);
    static Fixed & max(Fixed & val1, Fixed & val2);
};

std::ostream  &operator<<(std::ostream &out, Fixed const &val);
