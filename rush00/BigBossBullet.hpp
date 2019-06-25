/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BigBossBullet.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmartyny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/25 16:15:02 by pmartyny          #+#    #+#             */
/*   Updated: 2019/06/25 16:15:04 by pmartyny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <ncurses.h>
#include <iostream>
#include <string>
#include "Bullet.hpp"

class BigBossBullet : public Bullet
{
public:
  BigBossBullet(void);
  BigBossBullet(int x, int y);
  BigBossBullet(BigBossBullet &val);
  BigBossBullet &operator=(BigBossBullet const &val);
  virtual ~BigBossBullet();

  void shoot(void);
  void goRight(void);
  void goLeft(void);
};