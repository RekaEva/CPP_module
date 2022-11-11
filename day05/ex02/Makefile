
NAME = bureaucrat

SRC = main.cpp Bureaucrat.cpp Form.cpp ShrubberyCreationForm.cpp\
RobotomyRequestForm.cpp PresidentialPardonForm.cpp 

HEADER = Bureaucrat.hpp Form.hpp PresidentialPardonForm.hpp \
RobotomyRequestForm.hpp  ShrubberyCreationForm.hpp

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

