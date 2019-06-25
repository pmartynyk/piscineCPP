/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Player.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmartyny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/22 12:03:05 by pmartyny          #+#    #+#             */
/*   Updated: 2019/06/22 12:03:09 by pmartyny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Player.hpp"

Player::Player(void)
{
    life = 3;
}

Player::Player(int x, int y) : xCord(x), yCord(y)
{
    life = 3;
}

Player::Player(Player &val)
{
    if (this != &val)
        *this = val;
}

Player &Player::operator=(Player const &val)
{
    this->xCord = val.xCord;
    this->yCord = val.yCord;
    this->life = val.life;
    return *this;
}

Player::~Player(void)
{
}

int Player::getXCord(void)
{
    return this->xCord;
}

int Player::getYCord(void)
{
    return this->yCord;
}

int Player::getLife(void)
{
    return this->life;
}

void Player::moveRight(void)
{
    this->xCord = this->xCord + 1;
}

void Player::moveLeft(void)
{
    this->xCord = this->xCord - 1;
}

int Player::isHit(int x, int y)
{
    if ((yCord == y || yCord == +1) && (xCord == x || xCord == x + 1 || xCord == x - 1 || xCord == x + 2 || xCord == x - 2))
    {
        this->life--;
        return 1;
    }
    return 0;
}

void Player::addLife(int c)
{
    this->life = this->life + c;
}
