/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmartyny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/25 18:21:42 by pmartyny          #+#    #+#             */
/*   Updated: 2019/06/25 18:21:46 by pmartyny         ###   ########.fr       */
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

