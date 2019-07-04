# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pmartyny <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/06/24 16:25:10 by pmartyny          #+#    #+#              #
#    Updated: 2019/06/24 16:25:11 by pmartyny         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= phone_book
SRC		= phone_book.cpp
FLAG	= -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	clang++ $(FLAG) $(SRC) $^ -o $(NAME)

clean:
	/bin/rm -f *.o
	/bin/rm -rf ./objects/*.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
