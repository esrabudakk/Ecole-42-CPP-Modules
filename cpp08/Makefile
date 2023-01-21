SRCS	= main.cpp

OTHERS	= easyfind.hpp Makefile

C++		= c++ -Wall -Wextra -Werror -std=c++98

RM		= rm -rf

NAME	= template

all: $(NAME)

$(NAME): $(SRCS) $(OTHERS)
	$(C++) $(SRCS) -o $(NAME)

clean:
	$(RM) $(NAME)

fclean: clean

re: clean
	all

.PHONY: all clean fclean re
