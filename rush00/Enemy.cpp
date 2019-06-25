/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmartyny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/23 11:29:35 by pmartyny          #+#    #+#             */
/*   Updated: 2019/06/23 11:29:37 by pmartyny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy(void)
{
    life = 1;
}

Enemy::Enemy(int x, int y) : xCord(x), yCord(y)
{
    life = 1;
}

Enemy::Enemy(int x, int y, int life) : xCord(x), yCord(y), life(life)
{
}

Enemy::Enemy(Enemy &val)
{
    if (this != &val)
        *this = val;
}

Enemy &Enemy::operator=(Enemy const &val)
{
    this->xCord = val.xCord;
    this->yCord = val.yCord;
    this->life = val.life;
    return *this;
}

Enemy::~Enemy(void)
{
}

int Enemy::getXCord(void)
{
    return this->xCord;
}

int Enemy::getYCord(void)
{
    return this->yCord;
}

int Enemy::getLife(void)
{
    return this->life;
}

void Enemy::setCord(int x, int y)
{
    this->xCord = x;
    this->yCord = y;
}

void Enemy::setLife(int l)
{
    this->life = l;
}

int Enemy::alive(void)
{
    if (this->life >= 1)
        return 1;
    else
        return 0;
}

int Enemy::isHit(int x, int y)
{
    if ((this->xCord == x || this->xCord + 1 == x ||
        this->xCord - 1 == x) && this->yCord == y)
        {
            this->life = 0;
            return 1;
        }
    return 0;
}
void Enemy::moveRight(void)
{
    this->xCord++;
}

void Enemy::moveLeft(void)
{
    this->xCord--;
}

void Enemy::moveDown(void)
{
    this->yCord++;
}

void Enemy::moveUp(void)
{
    this->yCord--;
}