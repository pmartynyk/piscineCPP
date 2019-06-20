/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmartyny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/19 13:30:39 by pmartyny          #+#    #+#             */
/*   Updated: 2019/06/19 13:30:40 by pmartyny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RadScorpion.hpp"

RadScorpion::RadScorpion(void) : Enemy(80, "Red Scorpion")
{
    std::cout << "* click click click *" << std::endl;
}

RadScorpion::RadScorpion(RadScorpion &val) : Enemy(val)
{
    if (this != &val)
        *this = val;
    std::cout << "* click click click *" << std::endl;
}

RadScorpion &RadScorpion::operator=(RadScorpion const &val)
{
    Enemy::operator=(val);
    return *this;
}

RadScorpion::~RadScorpion(void)
{
    std::cout << "* SPROTCH *" << std::endl;
}

void RadScorpion::takeDamage(int damage)
{
    int curDam;
    if (damage > 0)
    {
        if (damage > this->getHP())
            curDam = this->getHP();
        else
            curDam = damage;
        this->setHP(this->getHP() - curDam);
        if (this->getHP() < 0)
            this->setHP(0);
    }
}
