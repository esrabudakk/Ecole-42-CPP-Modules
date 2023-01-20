NAME = intern
SRC = main.cpp Bureaucrat.cpp AForm.cpp PresidentialPardonForm.cpp RobotomyRequestForm.cpp ShrubberyCreationForm.cpp Intern.cpp
INCS = Bureaucrat.hpp AForm.hpp PresidentialPardonForm.hpp RobotomyRequestForm.hpp ShrubberyCreationForm.hpp Intern.hpp
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
		$(RM) *_shrubbery

re : fclean all

.PHONY : all clean fclean re
