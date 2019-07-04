# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pmartyny <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/06/26 18:54:32 by pmartyny          #+#    #+#              #
#    Updated: 2019/06/26 18:54:33 by pmartyny         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= eval_expr

LIB = Fixed.class.hpp

SRC		= main.cpp\
		Fixed.class.cpp

FLAG	= -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	clang++ $(CFLAG) $(SRC) -I$(LIB)$^ -o $(NAME)

./objects/%.o: ./sources/%.cpp
	clang++ -c $< -o $@

clean:
	/bin/rm -f *.o
	/bin/rm -rf ./objects/*.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
