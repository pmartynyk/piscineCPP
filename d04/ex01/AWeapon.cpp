/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmartyny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/29 09:31:47 by pmartyny          #+#    #+#             */
/*   Updated: 2019/06/29 09:31:48 by pmartyny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon(std::string const & name, int action_points, int damage) : name(name), damage(damage), action_points(action_points)
{}

AWeapon::~AWeapon(void)
{}

AWeapon::AWeapon(AWeapon & val)
{
    if (this != &val)
        *this = val;
}

AWeapon & AWeapon::operator=(AWeapon const & val)
{
    this->name = val.name;
    this->action_points = val.action_points;
    this->damage = val.damage;
    return (*this);
}

std::string AWeapon::getName() const
{
    return this->name;
}

int         AWeapon::getDamage() const
{
    return this->damage;
}

int AWeapon::getAPCost() const
{
    return this->action_points;
}
