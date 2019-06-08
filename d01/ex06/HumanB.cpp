/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmartyny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 13:11:43 by pmartyny          #+#    #+#             */
/*   Updated: 2019/06/05 13:11:47 by pmartyny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name)
{};

HumanB::~HumanB(void)
{}

void    HumanB::attack()
{
    std::cout << name << " attacks with his " << w->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &w)
{
    this->w = &w;
}

