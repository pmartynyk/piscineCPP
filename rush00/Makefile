# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pmartyny <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/06/03 18:44:50 by pmartyny          #+#    #+#              #
#    Updated: 2019/06/03 18:44:52 by pmartyny         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= ft_retro

LIBS = -lncurses

SRC		= main.cpp\
		Game.cpp\
		Player.cpp\
		Bullet.cpp\
		Enemy.cpp\
		EnemyBullet.cpp\
		BigBoss.cpp\
		BigBossBullet.cpp

FLAG	= -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	clang++ -std=c++11 $(FLAG) $(LIBS) $(SRC) $^ -o $(NAME)

./%.o: ./%.cpp
	clang++ -c $< -o $@

clean:
	/bin/rm -f *.o
	/bin/rm -rf ./objects/*.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all