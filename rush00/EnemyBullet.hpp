/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   EnemyBullet.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmartyny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/24 14:21:13 by pmartyny          #+#    #+#             */
/*   Updated: 2019/06/24 14:21:14 by pmartyny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <ncurses.h>
#include <iostream>
#include <string>
#include "Bullet.hpp"

class EnemyBullet : public Bullet
{
  public:
    EnemyBullet(void);
    EnemyBullet(int x, int y);
    EnemyBullet(EnemyBullet & val);
    EnemyBullet & operator=(EnemyBullet const & val);
    virtual ~EnemyBullet();

    void shoot(void);
};
