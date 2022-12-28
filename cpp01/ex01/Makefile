NAME = zombies
SRC = main.cpp Zombie.cpp zombieHorde.cpp
CC = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
OBJ = $(SRC:.cpp=.o)
RM = rm -rf

all : $(NAME)

$(NAME) : $(OBJ)
		$(CC) $(CPPFLAGS) $(SRC) -o $(NAME)

clean : 
		$(RM) $(OBJ)

fclean : clean 
		$(RM) $(NAME)

re : fclean all

.PHONY : all clean fclean re