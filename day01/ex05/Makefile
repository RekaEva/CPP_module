# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cpollito <cpollito@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/31 13:04:15 by cpollito          #+#    #+#              #
#    Updated: 2022/10/31 13:05:14 by cpollito         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = harl

SRC = main.cpp Harl.cpp

HEADER = Harl.hpp

CC = c++
CPPFLAGS = -Wall -Wextra -Werror -g3 -std=c++98 

OBJ = $(SRC:%.cpp=%.o)

RM = rm -rf

.PHONY:			all clean fclean re 

all : $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(CPPFLAGS) $(OBJ) -o $@

%.o : %.cpp $(HEADER) Makefile
	$(CC) $(CPPFLAGS) -c $< -o $@

clean:
				$(RM) $(OBJ)

fclean:			clean
				$(RM) $(NAME)

re:				fclean all