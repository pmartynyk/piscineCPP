/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BigBoss.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmartyny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/25 15:07:30 by pmartyny          #+#    #+#             */
/*   Updated: 2019/06/25 15:07:32 by pmartyny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <ncurses.h>
#include <iostream>
#include <string>
#include "Enemy.hpp"

class BigBoss : public Enemy
{
  public:
    BigBoss(void);
    BigBoss(int x, int y);
    BigBoss(int x, int y, int life);
    BigBoss(BigBoss &val);
    BigBoss &operator=(BigBoss const &val);
    virtual ~BigBoss(void);

    int isHit(int x, int y);

    void moveRight(void);
    void moveLeft(void);
    void moveUp(void);
    void moveDown(void);
    // void setLife(int);
  };
