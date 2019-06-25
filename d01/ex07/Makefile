# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pmartyny <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/06/25 18:22:53 by pmartyny          #+#    #+#              #
#    Updated: 2019/06/25 18:22:55 by pmartyny         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= replace

SRC		= main.cpp
FLAG	= -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	clang++ $(CFLAG) $(SRC) $^ -o $(NAME)

./objects/%.o: ./sources/%.cpp
	clang++ -c $< -o $@

clean:
	/bin/rm -f *.o
	/bin/rm -rf ./objects/*.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
