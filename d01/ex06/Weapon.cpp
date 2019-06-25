/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmartyny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/25 18:22:12 by pmartyny          #+#    #+#             */
/*   Updated: 2019/06/25 18:22:13 by pmartyny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : type(type) {};

Weapon::~Weapon(void)
{}

std::string const & Weapon::getType()
{
    return this->type;
}

void    Weapon::setType(std::string type)
{
    this->type = type;
}

