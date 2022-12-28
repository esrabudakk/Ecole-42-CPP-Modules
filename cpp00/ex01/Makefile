
NAME = phonebook
SRC = PhoneBook.cpp Contact.cpp Main.cpp
CC = c++
RM = rm -rf
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
OBJS = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJS)
		$(CC) $(CPPFLAGS) $(SRC) -o $(NAME)

clean : 
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY : all clean fclean re