# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pmartyny <pmartyny@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/06/03 18:44:50 by pmartyny          #+#    #+#              #
#    Updated: 2019/07/04 11:56:53 by pmartyny         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= ex01

SRC		= main.cpp


FLAG	= -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	clang++ $(FLAG) $(SRC) $^ -o $(NAME)

./%.o: ./%.cpp
	clang++ $(FLAG) -c $< -o $@
clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all