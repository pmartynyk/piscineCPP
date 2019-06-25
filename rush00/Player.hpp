/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Player.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmartyny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/22 12:03:12 by pmartyny          #+#    #+#             */
/*   Updated: 2019/06/22 12:31:38 by pmartyny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <ncurses.h>
#include <iostream>
#include <string>

class Player
{
private:
    int xCord;
    int yCord;
    int life;
public:
    Player(void);
    Player(int x, int y);
    Player(Player & val);
    Player & operator=(Player const & val);
    virtual ~Player();

    int getXCord(void);
    int getYCord(void);
    int getLife(void);
    void addLife(int);

    void moveRight();
    void moveLeft();

    int isHit(int x, int y);

};
