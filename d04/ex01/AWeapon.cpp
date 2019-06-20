/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmartyny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/19 11:12:34 by pmartyny          #+#    #+#             */
/*   Updated: 2019/06/19 11:12:36 by pmartyny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon(std::string const & name, int action_points, int damage) : name(name), action_points(action_points), damage(damage)
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
