/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmartyny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/26 18:54:17 by pmartyny          #+#    #+#             */
/*   Updated: 2019/06/26 18:54:19 by pmartyny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"

Fixed::Fixed(void) : fpValue(0)
{};

Fixed::Fixed(int const val)
{
    this->fpValue = val << num;
};

Fixed::Fixed(float const val)
{
    this->fpValue = roundf(val * (1 << num));
};

Fixed::~Fixed(void)
{}

Fixed::Fixed(Fixed const & val)
{
    *this = val;    
}

Fixed & Fixed::operator=(Fixed const & val)
{
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

/*
** Comparison operators
*/

bool Fixed::operator==(Fixed const & val)
{
    return (this->toFloat() == val.toFloat());
}

bool Fixed::operator!=(Fixed const & val)
{
    return (!(*this == val));
}

bool Fixed::operator<(Fixed const & val)
{
    return (this->toFloat() < val.toFloat());
}

bool Fixed::operator>(Fixed const & val)
{
    return (this->toFloat() > val.toFloat());
}

bool Fixed::operator<=(Fixed const & val)
{
    return (!(*this > val));
}

bool Fixed::operator>=(Fixed const & val)
{
    return (!(*this < val));
}

/*
** Arithmetic operators
*/

Fixed Fixed::operator+(Fixed const & val)
{
    return (Fixed(this->toFloat() + val.toFloat()));
}

Fixed Fixed::operator-(Fixed const & val)
{
    return (Fixed(this->toFloat() - val.toFloat()));
}

Fixed Fixed::operator*(Fixed const & val)
{
    return (Fixed(this->toFloat() * val.toFloat()));
}

Fixed Fixed::operator/(Fixed const & val)
{
    if (val.toFloat() != 0)
		return (Fixed(this->toFloat() / val.toFloat()));
	else
	{
		std::cout << "Cannot divide by 0." << std::endl;
		return (Fixed(0));
	}
}

Fixed & Fixed::operator++(void)
{
    this->fpValue = this->fpValue + 1;
    return (*this);
}

Fixed Fixed::operator++(int val)
{
    Fixed tmp(*this);
    (void) val;
    this->fpValue = this->fpValue + 1;
    return (tmp);
}

Fixed & Fixed::operator--(void)
{
    this->fpValue = this->fpValue - 1;
    return (*this);
}

Fixed Fixed::operator--(int val)
{
    Fixed tmp(*this);
    (void) val;
    this->fpValue = this->fpValue - 1;
    return (tmp);
}

Fixed const & Fixed::min(Fixed const & val1, Fixed const & val2)
{
    return (val1.toFloat() > val2.toFloat() ? val2 : val1);
}

Fixed const & Fixed::max(Fixed const & val1, Fixed const & val2)
{
    return (val1.toFloat() > val2.toFloat() ? val1 : val2);
}

Fixed &Fixed::min(Fixed & val1, Fixed & val2)
{
    return (val1 > val2 ? val2 : val1);
}

Fixed &Fixed::max(Fixed & val1, Fixed & val2)
{
    return (val1 > val2 ? val1 : val2);
}

std::ostream & operator<<(std::ostream &out, Fixed const &val)
{
    out<<val.toFloat();
    return (out);
}

int	const	Fixed::num = 8;
