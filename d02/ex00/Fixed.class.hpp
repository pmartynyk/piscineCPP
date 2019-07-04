/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmartyny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/26 18:52:37 by pmartyny          #+#    #+#             */
/*   Updated: 2019/06/26 18:52:39 by pmartyny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Fixed
{
private:
    int fpValue;
    static int const num; 
public:
    Fixed(void);
    ~Fixed(void);
    Fixed(Fixed &val);
    Fixed & operator=(Fixed const &val);
    int getRawBits(void) const;
    void setRawBits(int const val);

};
