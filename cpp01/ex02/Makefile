CC := c++

FLAGS := -Wall -Wextra -Werror -std=c++98

SRC = main.cpp

RM := rm -rf
NAME := brain

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(FLAGS) $(SRC) -o $(NAME)

fclean:
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
