# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cpollito <cpollito@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/04 13:59:17 by cpollito          #+#    #+#              #
#    Updated: 2022/11/06 18:46:51 by cpollito         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fragtrap

SRC = main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp

HEADER = ClapTrap.hpp  ScavTrap.hpp FragTrap.hpp

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