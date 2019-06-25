/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   EnemyBullet.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmartyny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/24 14:21:03 by pmartyny          #+#    #+#             */
/*   Updated: 2019/06/24 14:21:10 by pmartyny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "EnemyBullet.hpp"

EnemyBullet::EnemyBullet(void) : Bullet()
{
}

EnemyBullet::EnemyBullet(int x, int y) : Bullet(x, y)
{
}

EnemyBullet::EnemyBullet(EnemyBullet &val)
{
    if (this != &val)
        Bullet(val);
}

EnemyBullet &EnemyBullet::operator=(EnemyBullet const &val)
{
    Bullet::operator=(val);
    return *this;
}

EnemyBullet::~EnemyBullet(void)
{
}

void EnemyBullet::shoot(void)
{
	attron(COLOR_PAIR(2));
	mvprintw(this->getYCord(), this->getXCord(), "|");
	attroff(COLOR_PAIR(2));
}