NAME = diamondtrap
SRC = main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp DiamondTrap.cpp
CC = c++
CPPFLAGS = -Wall -std=c++98
RM = rm -rf
OBJ = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJ)
		$(CC) $(CPPFLAGS) $(SRC) -o $(NAME)

clean : 
		$(RM) $(OBJ)

fclean : clean 
		$(RM) $(NAME)

re : fclean all

.PHONY : all clean fclean re
