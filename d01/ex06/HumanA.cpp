/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmartyny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 13:11:25 by pmartyny          #+#    #+#             */
/*   Updated: 2019/06/05 13:11:27 by pmartyny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) : name(name), w(weapon)
{};

HumanA::~HumanA(void)
{}

void    HumanA::attack()
{
    std::cout << name << " attacks with his " << w.getType() << std::endl;
}

