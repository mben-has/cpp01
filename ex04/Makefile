# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mben-has <mben-has@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/22 16:50:17 by mben-has          #+#    #+#              #
#    Updated: 2024/03/03 00:55:21 by mben-has         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = sed_is_for_losers

SRC			=	./main.cpp \

OBJ			=	$(SRC:.cpp=.o)
			
CFLAGS		=	c++ -Wall -Wextra -Werror  -std=c++98

$(NAME): $(OBJ)
	$(CFLAGS) $(SRC) -o $(NAME)

all:	$(NAME)

clean:	
		rm -f $(OBJ)

fclean:	clean
		rm -f $(NAME)

re:		fclean all

.PHONY: all clean fclean re