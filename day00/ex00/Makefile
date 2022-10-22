# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cpollito <cpollito@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/18 13:49:25 by cpollito          #+#    #+#              #
#    Updated: 2022/10/22 15:41:17 by cpollito         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

SRC = megaphone.cpp

CC = c++
CPPFLAGC = -Wall -Wextra -Werror -std=c++98

OBJ = $(SRC:%.cpp=%.o)

RM = rm -rf

.PHONY:			all clean fclean re

all : $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(CPPFLAGC) $(OBJ) -o $(NAME)

%.o : %.cpp Makefile
	$(CC) $(CPPFLAGS) -c $< -o $@

clean:
				$(RM) $(OBJ)

fclean:			clean
				$(RM) $(NAME)

re:				fclean all
