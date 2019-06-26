/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Game.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmartyny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/21 15:10:37 by pmartyny          #+#    #+#             */
/*   Updated: 2019/06/21 15:10:40 by pmartyny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <ncurses.h>
#include <iostream>
#include <string>

#include "Player.hpp"
#include "Bullet.hpp"
#include "Enemy.hpp"
#include "EnemyBullet.hpp"
#include "BigBoss.hpp"
#include "BigBossBullet.hpp"

class Game
{
private:
  int score;
  int startGame;
  int endGame;
  int exitGame;
  int xCord;
  int yCord;
  int level;

  int menuPos;

  Player player;
  Bullet *bullet;
  Enemy *enemy;
  EnemyBullet *enemyBullet;
  BigBoss *bigBoss;
  BigBossBullet *bigBossBullets;

  int bigBossCount;
  int bigBossBulletCount;

  int enemyCount;
  int enemySpeed;

  int bulletCount;
  int bulletSpeed;

  int enemyBulletCount;
  int enemyBulletSpeed;

public:
  Game(void);
  Game(int x, int y);
  Game(Game &val);
  Game &operator=(Game const &val);
  virtual ~Game(void);

  void setStartGame(void);
  int getStartGame(void) const;
  void setEndGame(void);
  int getEndGame(void) const;
  void setExitGame(void);
  int getExitGame(void) const;
  int getLife(void);
  int getBulletCount(void) const;
  int getAvailableBullets(void) const;
  int getLevel(void) const;
  int getScore(void) const;

  void setMenuPos(int);
  int getMenuPos(void) const;

  int getBulletSpeed(void);
  void setBulletSpeed(int);

  int getEnemyBulletSpeed(void);
  void setEnemyBulletSpeed(int);

  int getEnemySpeed(void);
  void setEnemySpeed(int);

  void drawPlayer(void);

  void putEnemys(void);
  void drawEnemy(void);

  void putBigBoss(void);
  void drawBigBoss(void);
  void moveBigBoss(void);

  void putEnemysBullet(void);
  void moveEnenysBullets(void);

  void putBigBossBullet(void);
  void moveBigBossBullets(void);

  void playGame(int);

  void shoot(void);
  void moveBullets(void);

  void moveEnemys(void);

  int allKilled(void);

  void startNewLevel(void);
};
