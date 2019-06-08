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

class Fixed
{
private:
    int fpValue;
    static int const num; 
public:
    Fixed(void);
    ~Fixed(void);
    Fixed(Fixed const &val);
    Fixed & operator=(Fixed const &val);
    int getRawBits(void) const;
    void setRawBits(int const val);

};
