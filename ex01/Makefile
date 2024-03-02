# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mben-has <mben-has@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/22 16:50:17 by mben-has          #+#    #+#              #
#    Updated: 2024/03/02 08:21:53 by mben-has         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = moar_brainz

SRC			=	./Zombie.cpp \
				./zombieHorde.cpp \
				./main.cpp

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