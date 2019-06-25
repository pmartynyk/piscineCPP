/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BigBoss.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmartyny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/25 15:07:25 by pmartyny          #+#    #+#             */
/*   Updated: 2019/06/25 15:07:26 by pmartyny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BigBoss.hpp"

BigBoss::BigBoss(void) : Enemy()
{
    setLife(5);
}

BigBoss::BigBoss(int x, int y) : Enemy(x, y)
{
    setLife(5);
}

BigBoss::BigBoss(int x, int y, int life) : Enemy(x, y, life)
{
}

BigBoss::BigBoss(BigBoss &val)
{
    if (this != &val)
        *this = val;
}

BigBoss &BigBoss::operator=(BigBoss const &val)
{
    Enemy::operator=(val);
    return *this;
}

BigBoss::~BigBoss(void)
{
}

int BigBoss::isHit(int x, int y)
{
    if ((this->getXCord() == x || this->getXCord() + 1 == x ||
         this->getXCord() - 1 == x) && (this->getYCord() == y || this->getYCord() - 1 == y))
    {
        this->setLife(this->getLife() - 1);
        return 1;
    }
    return 0;
}

void BigBoss::moveLeft()
{
    this->setCord(this->getXCord() - 1, this->getYCord());
}

void BigBoss::moveRight()
{
    this->setCord(this->getXCord() + 1, this->getYCord());
}

void BigBoss::moveDown()
{
    this->setCord(this->getXCord(), this->getYCord() + 1);
}

void BigBoss::moveUp()
{
    this->setCord(this->getXCord(), this->getYCord() - 1);
}