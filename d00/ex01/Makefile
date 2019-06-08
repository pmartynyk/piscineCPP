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

NAME	= phone_book
INCL	= phone_book.hpp
SRC		= phone_book.cpp
FLAG	= -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	g++ $(CFLAG) $(SRC) -I$(INCL) $^ -o $(NAME)

clean:
	/bin/rm -f *.o
	/bin/rm -rf ./objects/*.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all