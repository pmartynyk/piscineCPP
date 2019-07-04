/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Game.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmartyny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/21 15:10:32 by pmartyny          #+#    #+#             */
/*   Updated: 2019/06/21 15:10:33 by pmartyny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Game.hpp"
#include <cstdlib>

Game::Game(int x, int y) : xCord(x), yCord(y)
{
    this->startGame = 0;
    this->endGame = 0;
    this->exitGame = 0;
    this->level = 1;

    this->menuPos = 1;
    this->player = Player(25, yCord - 1);
    this->bulletCount = 15;
    this->bulletSpeed = 5000;
    this->bullet = new Bullet[this->bulletCount];
    this->enemyBulletCount = 15;
    this->enemyBullet = new EnemyBullet[this->enemyBulletCount];
    this->enemyBulletSpeed = 7000;
    this->enemyCount = 10;
    this->enemySpeed = 100000;
    this->enemy = new Enemy[this->enemyCount];
    this->bigBossCount = this->level / 2;
    this->bigBoss = new BigBoss[this->bigBossCount];
    this->bigBossBulletCount = this->bigBossCount * 3;
    this->bigBossBullets = new BigBossBullet[this->bigBossBulletCount];
    putEnemys();
    drawPlayer();
}

Game::Game(Game &val)
{
    if (this != &val)
        *this = val;
}

Game &Game::operator=(Game const &val)
{
    this->xCord = val.xCord;
    this->yCord = val.yCord;
    this->startGame = val.startGame;
    this->endGame = val.endGame;
    this->menuPos = val.menuPos;
    this->bulletCount = val.bulletCount;
    this->player = val.player;
    this->bullet = val.bullet;
    this->bulletSpeed = val.bulletSpeed;
    return *this;
}

Game::~Game()
{
    delete[] this->bullet;
    delete[] this->enemyBullet;
    delete[] this->enemy;
    delete[] this->bigBossBullets;
    delete[] this->bigBoss;
}
int Game::getStartGame(void) const
{
    return this->startGame;
}

int Game::getEndGame(void) const
{
    return this->endGame;
}

int Game::getExitGame(void) const
{
    return this->exitGame;
}

int Game::getMenuPos(void) const
{
    return this->menuPos;
}

int Game::getBulletSpeed(void)
{
    return this->bulletSpeed;
}

int Game::getEnemySpeed(void)
{
    return this->enemySpeed;
}

int Game::getEnemyBulletSpeed(void)
{
    return this->enemyBulletSpeed;
}
int Game::getLife(void)
{
    return this->player.getLife();
}

int Game::getBulletCount(void) const
{
    return this->bulletCount;
}

int Game::getAvailableBullets(void) const
{
    int x = 0;
    for (int i = 0; i < this->bulletCount; i++)
    {
        if (!this->bullet[i].alive())
            x++;
    }
    return (x);
}

int Game::getLevel(void) const
{
    return this->level;
}

int Game::getScore(void) const
{
    return this->score;
}

void Game::setStartGame(void)
{
    this->startGame = 1;
    system("afplay sound/respawn.mp3 &");
}

void Game::setEndGame(void)
{
    this->endGame = 1;
}

void Game::setExitGame(void)
{
    this->exitGame = 1;
}

void Game::setMenuPos(int c)
{
    if (c == 259 && this->menuPos > 1)
        this->menuPos = this->menuPos - 2;
    else if (c == 258 && this->menuPos < 5)
        this->menuPos = this->menuPos + 2;
}

void Game::setBulletSpeed(int c)
{
    if (c > 0)
        this->bulletSpeed -= 200;
    else if (c < 0)
        this->bulletSpeed += 200;
}

void Game::setEnemySpeed(int c)
{
    if (c > 0)
        this->enemySpeed -= 5000;
    else if (c < 0)
        this->bulletSpeed += 5000;
}

void Game::setEnemyBulletSpeed(int c)
{
    if (c >= 0)
        this->enemyBulletSpeed -= 200;
    else if (c < 0)
        this->enemyBulletSpeed += 200;
}

void Game::playGame(int c)
{
    if (c == 27)
        setEndGame();
    if (c == ' ')
        shoot();
    if (c == KEY_RIGHT || c == KEY_LEFT)
    {
        mvaddch(player.getYCord(), player.getXCord(), ' ');
        mvaddch(player.getYCord() + 1, player.getXCord() - 1, ' ');
        mvaddch(player.getYCord() + 1, player.getXCord() - 2, ' ');
        mvaddch(player.getYCord() + 1, player.getXCord() + 1, ' ');
        mvaddch(player.getYCord() + 1, player.getXCord() + 2, ' ');
        mvaddch(player.getYCord() + 1, player.getXCord(), ' ');
    }
    if (c == KEY_RIGHT && player.getXCord() < xCord - 2)
        player.moveRight();
    if (c == KEY_LEFT && player.getXCord() > 3)
        player.moveLeft();
    drawPlayer();
}

void Game::drawPlayer(void)
{
    attron(COLOR_PAIR(1));
    mvaddch(player.getYCord(), player.getXCord(), '^');
    mvaddch(player.getYCord() + 1, player.getXCord() - 1, '/');
    mvaddch(player.getYCord() + 1, player.getXCord() - 2, '/');
    mvaddch(player.getYCord() + 1, player.getXCord() + 1, '\\');
    mvaddch(player.getYCord() + 1, player.getXCord() + 2, '\\');
    mvaddch(player.getYCord() + 1, player.getXCord(), '_');
    attroff(COLOR_PAIR(1));
    drawEnemy();
    drawBigBoss();
    box(stdscr, 0, 0);
    refresh();
}

void Game::putEnemys(void)
{
    int tmp;
    for (int i = 0; i < this->enemyCount; i++)
    {
        tmp = (yCord / 10);
        tmp = (tmp < 1 ? 1 : tmp);
        this->enemy[i].setCord(2 + (rand() % xCord + 3), 1 + (rand() % tmp + 1));
        this->enemy[i].setLife(1);
    }
}

void Game::drawEnemy(void)
{
    for (int i = 0; i < this->enemyCount; i++)
    {
        mvprintw(this->enemy[i].getYCord(), enemy[i].getXCord(), " ");
        if (this->enemy[i].alive())
        {
            attron(COLOR_PAIR(2));
            mvprintw(this->enemy[i].getYCord(), enemy[i].getXCord(), "#");
            attroff(COLOR_PAIR(2));
        }
    }
}

void Game::moveEnemys(void)
{
    for (int i = 0; i < enemyCount; i++)
    {
        if (this->enemy[i].alive())
            mvprintw(this->enemy[i].getYCord(), enemy[i].getXCord(), " ");
    }
    for (int i = 0; i < enemyCount; i++)
    {
        float tmp = 1.0 * rand() / RAND_MAX;
        if (this->enemy[i].alive())
        {
            if (tmp < 0.5)
            {
                if (this->enemy[i].getXCord() > 2)
                    this->enemy[i].moveLeft();
                else
                    this->enemy[i].moveRight();
            }
            else if (tmp < 0.95)
            {
                if (this->enemy[i].getXCord() < xCord)
                    this->enemy[i].moveRight();
                else
                    this->enemy[i].moveLeft();
            }
            else
            {
                if (this->enemy[i].getYCord() < (yCord - 2))
                    this->enemy[i].moveDown();
            }
        }
    }
}


void Game::shoot(void)
{
    for (int i = 0; i < this->bulletCount; i++)
    {
        if (!this->bullet[i].alive())
        {
            this->bullet[i].setPosition(player.getXCord(), player.getYCord(), 1);
            system("afplay sound/shoot.wav &");
            return;
        }
    }
}

void Game::moveBullets(void)
{
    for (int i = 0; i < this->bulletCount; i++)
    {
        if (this->bullet[i].alive())
        {
            this->bullet[i].clearBullet();
            this->bullet[i].goUp();
            this->bullet[i].shoot();
            if (this->bullet[i].getYCord() == 1)
            {
                this->bullet[i].setLife(0);
                this->bullet[i].clearBullet();
            }
        }
        for (int j = 0; j < this->enemyCount; j++)
        {
            if (this->enemy[j].alive())
            {
                if (this->enemy[j].isHit(this->bullet[i].getXCord(), this->bullet[i].getYCord()))
                {
                    this->bullet[i].setLife(0);
                    this->bullet[i].clearBullet();
                    this->score += 5;
                    system("afplay sound/invaderkilled.wav &");
                    if (allKilled())
                    {
                        this->level++;
                        startNewLevel();
                        return;
                    }
                }
            }
        }
        for (int k = 0; k < this->bigBossCount; k++)
        {
            if (this->bigBoss[k].alive())
            {
                if (this->bullet[i].alive() && this->bigBoss[k].isHit(this->bullet[i].getXCord(), this->bullet[i].getYCord()))
                {
                    this->bullet[i].setLife(0);
                    this->bullet[i].clearBullet();
                    this->score += 10;
                    system("afplay sound/invaderkilled.wav &");
                    if (allKilled())
                    {
                        this->level++;
                        startNewLevel();
                        return;
                    }
                }
            }
        }
    }
}


int Game::allKilled(void)
{
    for (int i = 0; i < this->enemyCount; i++)
    {
        if (this->enemy[i].alive())
            return 0;
    }
    for (int i = 0; i < this->bigBossCount; i++)
    {
        if (this->bigBoss[i].alive())
            return 0;
    }
    return 1;
}

void Game::putEnemysBullet(void)
{
    int tmp;
    for (int i = 0; i < enemyBulletCount; i++)
    {
        tmp = rand();
        if (tmp % 12 == 0 && !this->enemyBullet[i].alive() &&
            this->enemy[i].alive())
            this->enemyBullet[i].setPosition(this->enemy[i].getXCord(), this->enemy[i].getYCord() - 1, 1);
    }
}

void Game::moveEnenysBullets(void)
{
    for (int i = 0; i < this->enemyBulletCount; i++)
    {
        if (this->enemyBullet[i].alive())
        {
            this->enemyBullet[i].clearBullet();
            this->enemyBullet[i].goDown();
            this->enemyBullet[i].shoot();
            if (this->enemyBullet[i].getYCord() == this->yCord + 1)
            {
                this->enemyBullet[i].setLife(0);
                this->enemyBullet[i].clearBullet();
            }
        }
        if (this->enemyBullet[i].alive() &&
            this->player.isHit(this->enemyBullet[i].getXCord(), this->enemyBullet[i].getYCord()))
        {
            if (this->player.getLife() == 0)
                setEndGame();
            this->enemyBullet[i].setLife(0);
            this->enemyBullet[i].clearBullet();
            system("afplay sound/explosion.wav &");
        }
    }
}

void Game::putBigBoss()
{
    int tmp;

    for (int i = 0; i < this->bigBossCount; i++)
    {
        tmp = (yCord / 10);
        tmp = (tmp < 1 ? 1 : tmp);
        this->bigBoss[i].setCord(2 + (rand() % xCord + 3), 1 + (rand() % tmp + 1));
        this->bigBoss[i].setLife(5);
    }
}

void Game::drawBigBoss()
{
    for (int i = 0; i < this->bigBossCount; i++)
    {
        mvprintw(this->bigBoss[i].getYCord(), this->bigBoss[i].getXCord(), " ");
        mvprintw(this->bigBoss[i].getYCord() + 1, this->bigBoss[i].getXCord() + 1, " ");
        mvprintw(this->bigBoss[i].getYCord() + 1, this->bigBoss[i].getXCord(), " ");
        mvprintw(this->bigBoss[i].getYCord() + 1, this->bigBoss[i].getXCord() - 1, " ");
        if (this->bigBoss[i].alive())
        {
            if (this->bigBoss[i].getLife() == 1)
                attron(COLOR_PAIR(1));
            else
                attron(COLOR_PAIR(3));
            mvprintw(this->bigBoss[i].getYCord(), this->bigBoss[i].getXCord(), "^");
            mvprintw(this->bigBoss[i].getYCord() + 1, this->bigBoss[i].getXCord() + 1, "v");
            mvprintw(this->bigBoss[i].getYCord() + 1, this->bigBoss[i].getXCord(), "v");
            mvprintw(this->bigBoss[i].getYCord() + 1, this->bigBoss[i].getXCord() - 1, "v");
            if (this->bigBoss[i].getLife() == 1)
                attroff(COLOR_PAIR(1));
            else
                attroff(COLOR_PAIR(3));
        }
    }
}

void Game::moveBigBoss(void)
{    
    int col = 0;
    int row = 0;
    getmaxyx(stdscr, col, row);

    for (int i = 0; i < bigBossCount; i++)
    {
        if (this->bigBoss[i].alive())
        {
            mvprintw(this->bigBoss[i].getYCord(), this->bigBoss[i].getXCord(), " ");
            mvprintw(this->bigBoss[i].getYCord() + 1, this->bigBoss[i].getXCord() + 1, " ");
            mvprintw(this->bigBoss[i].getYCord() + 1, this->bigBoss[i].getXCord(), " ");
            mvprintw(this->bigBoss[i].getYCord() + 1, this->bigBoss[i].getXCord() - 1, " ");
        }
    }
    for (int i = 0; i < bigBossCount; i++)
    {
        float tmp = 1.0 * rand() / RAND_MAX;
        if (this->bigBoss[i].alive())
        {
            if (this->bigBoss[i].getXCord() >= row - 3)
                this->bigBoss[i].moveLeft();
            else if (this->bigBoss[i].getXCord() <= -1 )
                this->bigBoss[i].moveRight();
            else if (tmp < 0.5)
            {
                if (this->bigBoss[i].getXCord() > 2)
                    this->bigBoss[i].moveRight();
                else
                    this->bigBoss[i].moveLeft();
            }
            else if (tmp < 0.95)
            {
                if (this->bigBoss[i].getXCord() < xCord)
                    this->bigBoss[i].moveLeft();
                else
                    this->bigBoss[i].moveRight();
            }
            else
            {
                if (this->bigBoss[i].getYCord() < (yCord - 2))
                    this->bigBoss[i].moveDown();
            }
        }
    }
}

void Game::putBigBossBullet()
{
    for (int i = 0; i < bigBossCount; i++)
    {
        if (this->bigBoss[i].alive())
        {
            if (!this->bigBossBullets[i * 3].alive() && !this->bigBossBullets[i * 3 + 1].alive() && !this->bigBossBullets[i * 3 + 2].alive())
            {
                this->bigBossBullets[i * 3].setPosition(this->bigBoss[i].getXCord(), this->bigBoss[i].getYCord() + 1, 1);
                this->bigBossBullets[i * 3 + 1].setPosition(this->bigBoss[i].getXCord() - 1, this->bigBoss[i].getYCord() + 1, 1);
                this->bigBossBullets[i * 3 + 2].setPosition(this->bigBoss[i].getXCord() + 1, this->bigBoss[i].getYCord() + 1, 1);
            }
        }
    }
}

void Game::moveBigBossBullets(void)
{
    for (int i = 0; i < this->bigBossBulletCount; i++)
    {
        if (this->bigBossBullets[i].alive())
        {
            this->bigBossBullets[i].clearBullet();
            if (i % 3 == 1)
                this->bigBossBullets[i].goLeft();
            else if (i % 3 == 2)
                this->bigBossBullets[i].goRight();
            else if (i % 3 == 0)
                this->bigBossBullets[i].goDown();
            this->bigBossBullets[i].shoot();
            if (this->bigBossBullets[i].getYCord() == this->yCord + 1 || this->bigBossBullets[i].getXCord() == 1 || this->bigBossBullets[i].getXCord() == this->xCord - 2)
            {
                this->bigBossBullets[i].setLife(0);
                this->bigBossBullets[i].clearBullet();
            }
        }
        if (this->bigBossBullets[i].alive() &&
            this->player.isHit(this->bigBossBullets[i].getXCord(), this->bigBossBullets[i].getYCord()))
        {
            if (this->player.getLife() == 0)
                setEndGame();
            this->bigBossBullets[i].setLife(0);
            this->bigBossBullets[i].clearBullet();
            system("afplay sound/explosion.wav &");
        }
    }
}

void Game::startNewLevel(void)
{
    for (int i = 0; i < this->bulletCount; i++)
    {
        if (this->bullet[i].alive())
        {
            this->bullet[i].clearBullet();
            this->bullet[i].setLife(0);
        }
    }
    for (int i = 0; i < this->enemyBulletCount; i++)
    {
        if (this->enemyBullet[i].alive())
        {
            this->enemyBullet[i].clearBullet();
            this->enemyBullet[i].setLife(0);
        }
    }
    for (int i = 0; i < this->bigBossBulletCount; i++)
    {
        if (this->bigBossBullets[i].alive())
        {
            this->bigBossBullets[i].clearBullet();
            this->bigBossBullets[i].setLife(0);
        }
    }
    delete[] this->bullet;
    delete[] this->enemy;
    delete[] this->enemyBullet;
    this->bulletCount += 1;
    this->bullet = new Bullet[this->bulletCount];
    this->enemyBulletCount += 2;
    this->enemyBullet = new EnemyBullet[this->enemyBulletCount];
    this->enemyCount += 2;
    this->enemy = new Enemy[this->enemyCount];
    if (this->level % 2 == 0)
    {
        delete[] this->bigBoss;
        this->bigBossCount = this->level / 2;
        this->bigBoss = new BigBoss[bigBossCount];
        delete[] this->bigBossBullets;
        this->bigBossBulletCount = this->bigBossCount * 3;
        this->bigBossBullets = new BigBossBullet[this->bigBossBulletCount];
        putBigBoss();
    }
    if (this->player.getLife() < 3)
        this->player.addLife(1);
    setEnemyBulletSpeed(1);
    setEnemySpeed(1);
    setBulletSpeed(1);

    putEnemys();
    drawPlayer();
    system("afplay sound/respawn.mp3 &");
}