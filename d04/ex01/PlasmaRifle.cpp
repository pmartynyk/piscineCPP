/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmartyny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/29 09:32:17 by pmartyny          #+#    #+#             */
/*   Updated: 2019/06/29 09:32:18 by pmartyny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"
#include <iostream>

PlasmaRifle::PlasmaRifle() : AWeapon("Plasma Rifle", 5, 21)
{}

PlasmaRifle::PlasmaRifle(PlasmaRifle & val) : AWeapon(val)
{
    if (this != &val)
        *this = val;
}

PlasmaRifle & PlasmaRifle::operator=(PlasmaRifle const & val)
{
    AWeapon::operator=(val);
    return *this;
}

PlasmaRifle::~PlasmaRifle(void)
{}

void PlasmaRifle::attack(void) const
{
    std::cout << "* piouuu piouuu piouuu *" << std::endl;
}


