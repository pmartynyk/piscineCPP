/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmartyny <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/21 12:30:34 by pmartyny          #+#    #+#             */
/*   Updated: 2019/06/21 12:30:36 by pmartyny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ncurses.h>
#include <iostream>
#include <string>
#include <ctime>

#include "Game.hpp"
#include "Player.hpp"

void helpMenu(int y, int x)
{
    WINDOW *help = newwin(9, 25, y, x);
    box(help, 1, 0);
    mvwprintw(help, 1, 8, "CONTROLS");
    mvwprintw(help, 3, 2, "SHOOT: Spacebar");
    mvwprintw(help, 5, 2, "MOVE LEFT: <-");
    mvwprintw(help, 7, 2, "MOVE RIGHT: ->");
    // mvwprintw(help, 9, 2, "SHOOT STRAFE LEFT: 1");
    // mvwprintw(help, 11, 2, "SHOOT STRAFE RIGHT: 3");
    wrefresh(help);
    wclear(help);
    delwin(help);
}

int main(void)
{
    std::clock_t start;
    int duration;
    int col = 0;
    int row = 0;
    int c;
    start = std::clock();

    initscr();
    cbreak();
    noecho();
    keypad(stdscr, TRUE);
    nodelay(stdscr, TRUE);
    getmaxyx(stdscr, col, row);
    if (col < 8 || row < 20)
    {
        std::cout << "Termonal is way to small, for normal gameplay!" << std::endl;
        return 0;
    }
    curs_set(0);

    start_color();
    init_pair(1, COLOR_CYAN, COLOR_BLACK);
    init_pair(2, COLOR_RED, COLOR_BLACK);
    init_pair(3, COLOR_YELLOW, COLOR_BLACK);
    // init_pair(4, COLOR_GREEN, COLOR_BLACK);
    // init_pair(5, COLOR_MAGENTA, COLOR_BLACK);
    // init_pair(6, COLOR_BLUE, COLOR_BLACK);
    refresh();

    Game *game = new Game(row - 2, col - 2);

    WINDOW *menu = newwin(7, 11, (col / 2 - 3), (row / 2) - 5);
    // system("afplay sound/spaceinvaders.mpeg &");
    while (!game->getStartGame())
    {
        box(menu, 1, 0);
        mvwprintw(menu, game->getMenuPos(), 2, "*");
        mvwprintw(menu, 1, 4, "START");
        mvwprintw(menu, 3, 4, "HELP");
        mvwprintw(menu, 5, 4, "QUIT");
        refresh();
        wrefresh(menu);

        if ((c = getch()) != ERR)
        {
            if (c == KEY_UP || c == KEY_DOWN)
            {
                beep();
                mvwprintw(menu, game->getMenuPos(), 2, " ");
                game->setMenuPos(c);
            }
            if (c == 10 && game->getMenuPos() == 3)
                helpMenu((col / 2) - 3, (row / 2) + 7);
            else if (c == 10 && game->getMenuPos() == 5)
            {
                endwin();
                system("killall afplay");
                return 0;
            }
            else if (c == 10 && game->getMenuPos() == 1)
            {
                game->setStartGame();
            }
        }
    }
    clear();
    delwin(menu);

    system("afplay sound/bgm.mp3 &");
    int y, x, cnt = 0;
    while (!game->getEndGame())
    {
        if (cnt == 0)
        {
            for (int i = 1; i < 100; i++)
            {
                if ((y = col - rand() % col) >= (col - 1))
                    y = y - 3;
                if ((x = row - rand() % row) >= (row - 1))
                    x = x - 3;
                mvprintw(y, x, "*");
            }
        }
        if (cnt % 11500 == 0)
        {
            if ((y = col - rand() % col) >= (col - 1))
                y = y - 3;
            if ((x = row - rand() % row) >= (row - 1))
                x = x - 3;
            mvprintw(y, x, "*");
        }
        if (cnt % 8000 == 0)
        {
            for (int i = 1; i < 50; i++)
            {
                if ((y = col - rand() % col) >= (col - 1))
                    y = y - 3;
                if ((x = row - rand() % row) >= (row - 1))
                    x = x - 3;
                mvprintw(y, x, " ");
            }
        }
        duration = (std::clock() - start) / (int)CLOCKS_PER_SEC;
        mvprintw(0, 0, "[SCORE  %d] [TIME %d]", game->getScore(), duration);
        mvprintw(col - 1, 0, "[LIVES %d | LEVEL %d | BULLETS (%d/%d)]",
                 game->getLife(), game->getLevel(), game->getAvailableBullets(), game->getBulletCount());
        if ((c = getch()) != ERR)
            game->playGame(c);
        if (cnt % game->getBulletSpeed() == 0)
            game->moveBullets();
        if (cnt % 1000 == 0)
            game->drawPlayer();
        if (cnt % game->getEnemySpeed() == 0)
        {
            game->moveEnemys();
            game->putEnemysBullet();
        }
        if (cnt % game->getEnemySpeed() == 0)
        {
            game->moveBigBoss();
            game->putBigBossBullet();
        }
        if (cnt % game->getEnemyBulletSpeed() == 0)
        {
            game->moveEnenysBullets();
            game->moveBigBossBullets();
        }
            

        cnt++;
        if (cnt > 100000000)
            cnt = 0;
    }
    system("killall afplay");
    system("afplay sound/gameover.mp3 &");
    WINDOW *end = newwin(9, 20, (col / 2 - 3), (row / 2) - 8);
    while (!game->getExitGame())
    {
        int minutes;
        int hours;
        int seconds;
        seconds = duration;
        minutes = duration / 60;
        hours = minutes / 60;
        minutes = minutes - hours * 60;
        seconds = seconds - minutes * 60;
        box(end, 0, 0);
        mvwprintw(end, 1, 2, "GAMEOVER");
        mvwprintw(end, 3, 2, "SCORE: %d", game->getScore());
        mvwprintw(end, 5, 2, "LEVEL: %d", game->getLevel());
        mvwprintw(end, 7, 2, "TIME:  %.2d:%.2d:%.2d", hours, minutes, seconds);
        refresh();
        wrefresh(end);
        if ((c = getch()) == 10)
        {
            game->setExitGame();
            delwin(end);
            clear();
        }
    }
    delwin(end);
    delete game;

    refresh();
    endwin();
    return 0;
}
