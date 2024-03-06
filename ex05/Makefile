# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mben-has <mben-has@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/03 04:34:33 by mben-has          #+#    #+#              #
#    Updated: 2024/03/06 01:59:22 by mben-has         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = harl_2.0

SRC			=	./main.cpp \
				./Harl.cpp 

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