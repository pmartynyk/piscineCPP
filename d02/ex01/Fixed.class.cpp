/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmartyny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 12:59:46 by pmartyny          #+#    #+#             */
/*   Updated: 2019/06/06 12:59:47 by pmartyny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"

Fixed::Fixed(void) : fpValue(0)
{
    std::cout << "Default constructor called" << std::endl;
};

Fixed::Fixed(int const val)
{
    std::cout << "Int constructor called" << std::endl;
    this->fpValue = val << num;
};

Fixed::Fixed(float const val)
{
    std::cout << "Float constructor called" << std::endl;
    this->fpValue = roundf(val * (1 << num));
};

Fixed::~Fixed(void)
{
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(Fixed const & val)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = val;    
}

Fixed & Fixed::operator=(Fixed const & val)
{
    std::cout << "Assignation constructor called" << std::endl;
    if (this != &val)
    {
        this->fpValue = val.getRawBits();
    }    
    return (*this);
}

int Fixed::getRawBits(void) const
{
    return this->fpValue;
}

void Fixed::setRawBits(int const val)
{
    this->fpValue = val;
}

float Fixed::toFloat(void) const
{
    return ((float)getRawBits() / (1 << this->num));
}

int Fixed::toInt(void) const
{
    return (getRawBits() >> this->num);
}

std::ostream & operator<<(std::ostream &out, Fixed const &val)
{
    out<<val.toFloat();
    return (out);
}

int	const	Fixed::num = 8;
