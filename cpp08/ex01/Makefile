NAME		=	span

SRCS		=	main.cpp Span.cpp

INCS		=	Span.hpp

OBJS		=	$(SRCS:.cpp=.o)

CC			=	c++

CFLAGS		=	-Wall -Wextra -Werror -std=c++98


all			:	$(NAME)

$(NAME)		:	$(OBJS) $(INCS)
				$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

clean		:	
				rm -rf $(OBJS)

fclean		:	clean
				rm -rf $(NAME)

re			:	fclean all

.PHONY		:	all clean fclean re