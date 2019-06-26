/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BigBossBullet.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmartyny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/25 16:14:57 by pmartyny          #+#    #+#             */
/*   Updated: 2019/06/25 16:14:59 by pmartyny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BigBossBullet.hpp"

BigBossBullet::BigBossBullet(void) : Bullet()
{
}

BigBossBullet::BigBossBullet(int x, int y) : Bullet(x, y)
{
}

BigBossBullet::BigBossBullet(BigBossBullet &val)
{
    if (this != &val)
        Bullet(val);
}

BigBossBullet &BigBossBullet::operator=(BigBossBullet const &val)
{
    Bullet::operator=(val);
    return *this;
}

BigBossBullet::~BigBossBullet(void)
{}

void BigBossBullet::shoot(void)
{
	attron(COLOR_PAIR(3));
	mvprintw(this->getYCord(), this->getXCord(), "o");
	attroff(COLOR_PAIR(3));
}

void BigBossBullet::goLeft(void)
{
    this->setPosition(this->getXCord() - 1, this->getYCord() + 1, 1);
}

void BigBossBullet::goRight(void)
{
    this->setPosition(this->getXCord() + 1, this->getYCord() + 1, 1);
}