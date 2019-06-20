/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmartyny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/19 13:30:25 by pmartyny          #+#    #+#             */
/*   Updated: 2019/06/19 13:30:27 by pmartyny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

SuperMutant::SuperMutant(void) : Enemy(170, "Super Mutant")
{
    std::cout << "Gaaah. Me want smash heads !" << std::endl;
}

SuperMutant::SuperMutant(SuperMutant &val) : Enemy(val)
{
    if (this != &val)
        *this = val;
    std::cout << "Gaaah. Me want smash heads !" << std::endl;
}

SuperMutant &SuperMutant::operator=(SuperMutant const &val)
{
    Enemy::operator=(val);
    return *this;
}

SuperMutant::~SuperMutant(void)
{
    std::cout << "Aaargh .." << std::endl;
}

void SuperMutant::takeDamage(int damage)
{
    int curDam;
    if (damage > 3)
    {
        if (damage > this->getHP() + 3)
            curDam = this->getHP() + 3;
        else
            curDam = damage;
        this->setHP(this->getHP() - curDam + 3);
        if (this->getHP() < 0)
            this->setHP(0);
    }
}