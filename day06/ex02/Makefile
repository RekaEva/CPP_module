
NAME = identify

SRC = main.cpp 

HEADER = Base.hpp A.hpp B.hpp C.hpp

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

