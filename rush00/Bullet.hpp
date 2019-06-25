/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bullet.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmartyny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/22 15:28:37 by pmartyny          #+#    #+#             */
/*   Updated: 2019/06/22 15:28:39 by pmartyny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <ncurses.h>
#include <iostream>
#include <string>

class Bullet
{
private:
    int xCord;
    int yCord;
    int life;
public:
    Bullet(void);
    Bullet(int x, int y);
    Bullet(Bullet & val);
    Bullet & operator=(Bullet const & val);
    virtual ~Bullet();

    int getXCord(void);
    int getYCord(void);
    int checkLife(void);

    void shoot(void);
    void clearBullet(void);

    void goUp(void);
    void goDown(void);

    void setPosition(int x, int y, int life);
    void setLife(int life);

    int alive(void);
};

