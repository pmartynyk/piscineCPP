/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bullet.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmartyny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/22 15:28:30 by pmartyny          #+#    #+#             */
/*   Updated: 2019/06/22 15:28:31 by pmartyny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bullet.hpp"

Bullet::Bullet(void)
{}

Bullet::Bullet(int x, int y) : xCord(x), yCord(y)
{
    this->life = 1;
}

Bullet::Bullet(Bullet & val)
{
    if (this != &val)
        *this = val;
}

Bullet & Bullet::operator=(Bullet const & val)
{
    this->xCord = val.xCord;
    this->yCord = val.yCord;
    this->life = val.life;
    return *this;
}

Bullet::~Bullet(void)
{}

int Bullet::getXCord(void)
{
    return this->xCord;
}

int Bullet::getYCord(void)
{
    return this->yCord;
}

void Bullet::shoot(void)
{
	attron(COLOR_PAIR(1));
	mvprintw(yCord, xCord, "|");
	attroff(COLOR_PAIR(1));
}

void Bullet::goUp(void)
{
    this->yCord--;
}

void Bullet::goDown(void)
{
    this->yCord++;
}

void Bullet::clearBullet(void) 
{
	mvprintw(yCord, xCord, " ");
}

void Bullet::setPosition(int x, int y, int life)
{
    this->xCord = x;
    this->yCord = y;
    this->life = life;
}

void Bullet::setLife(int life)
{
    this->life = life;
}

int Bullet::alive(void)
{
    if (this->life == 1)
        return 1;
    return 0;
}