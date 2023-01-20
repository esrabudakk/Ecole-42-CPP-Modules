NAME = form
SRC = main.cpp Bureaucrat.cpp Form.cpp
INCS = Bureaucrat.hpp Form.hpp
CC = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -rf
OBJ = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJ) $(INCS)
		$(CC) $(CPPFLAGS) $(SRC) -o $(NAME)

clean : 
		$(RM) $(OBJ)

fclean : clean 
		$(RM) $(NAME)

re : fclean all

.PHONY : all clean fclean re
