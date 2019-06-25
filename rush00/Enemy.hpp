/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmartyny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/23 11:29:42 by pmartyny          #+#    #+#             */
/*   Updated: 2019/06/23 11:29:45 by pmartyny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <ncurses.h>
#include <iostream>
#include <string>

class Enemy
{
  private:
    int xCord;
    int yCord;
    int life;

  public:
    Enemy(void);
    Enemy(int x, int y);
    Enemy(int x, int y, int life);
    Enemy(Enemy & val);
    Enemy & operator=(Enemy const & val);
    virtual ~Enemy(void);

    int getXCord(void);
    int getYCord(void);
    int getLife(void);

    void setCord(int, int);
    void setLife(int);

    int alive(void);
    int isHit(int x, int y);

    void moveRight(void);
    void moveLeft(void);
    void moveUp(void);
    void moveDown(void);
};
