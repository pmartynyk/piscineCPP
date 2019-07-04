/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmartyny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/29 09:32:08 by pmartyny          #+#    #+#             */
/*   Updated: 2019/06/29 09:32:09 by pmartyny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy(int hp, std::string const &type) : type(type), hp(hp)
{
}

Enemy::Enemy(Enemy &val)
{
    if (this != &val)
        *this = val;
}

Enemy &Enemy::operator=(Enemy const &val)
{
    this->hp = val.hp;
    this->type = val.type;
    return *this;
}

Enemy::~Enemy(void)
{
}

std::string Enemy::getType() const
{
    return this->type;
}

int Enemy::getHP() const
{
    return this->hp;
}
void Enemy::setHP(int val)
{
    this->hp = val;
}

void Enemy::takeDamage(int damage)
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
