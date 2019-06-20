/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmartyny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/19 11:39:07 by pmartyny          #+#    #+#             */
/*   Updated: 2019/06/19 11:39:11 by pmartyny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"
#include <iostream>

PowerFist::PowerFist() : AWeapon("Power Fist", 8, 50)
{}

PowerFist::PowerFist(PowerFist & val) : AWeapon(val)
{
    if (this != &val)
        *this = val;
}

PowerFist & PowerFist::operator=(PowerFist const & val)
{
    AWeapon::operator=(val);
    return *this;
}

PowerFist::~PowerFist(void)
{}

void PowerFist::attack(void) const
{
    std::cout << "* pschhh... SBAM! *" << std::endl;
}

