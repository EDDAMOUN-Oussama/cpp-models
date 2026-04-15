NAME =  Intern

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC =  Bureaucrat.cpp main.cpp AForm.cpp ShrubberyCreationForm.cpp Intern.cpp RobotomyRequestForm.cpp PresidentialPardonForm.cpp

OBJ = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp  Bureaucrat.hpp AForm.hpp ShrubberyCreationForm.hpp Intern.hpp RobotomyRequestForm.hpp PresidentialPardonForm.hpp PresidentialPardonForm.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: clean fclean re all