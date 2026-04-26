NAME =  convert

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC =  ScalarConverter.cpp main.cpp

INC = ScalarConverter.hpp

OBJ = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp  $(INC)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: clean fclean re all