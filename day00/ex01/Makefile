# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cpollito <cpollito@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/22 15:34:34 by cpollito          #+#    #+#              #
#    Updated: 2022/10/22 16:03:56 by cpollito         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook

SRC = main.cpp Contact.cpp PhoneBook.cpp 

HEADER = Contact.hpp PhoneBook.hpp

CC = c++
CPPFLAGC = -Wall -Wextra -Werror -std=c++98

OBJ = $(SRC:%.cpp=%.o)

RM = rm -rf

.PHONY:			all clean fclean re 

all : $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(CPPFLAGC) $(OBJ) -o $@

%.o : %.cpp $(HEADER) Makefile
	$(CC) $(CPPFLAGS) -c $< -o $@

clean:
				$(RM) $(OBJ)

fclean:			clean
				$(RM) $(NAME)

re:				fclean all
