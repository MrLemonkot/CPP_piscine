CC := c++

FLAGS := -Wall -Wextra -Werror -std=c++98

SRC = main.cpp Zombie.cpp zombieHorde.cpp
HEADERS = Zombie.hpp

RM := rm -rf
NAME := zombie

all: $(NAME)

$(NAME): $(SRC) $(HEADERS)
	$(CC) $(FLAGS) $(SRC) -o $(NAME)

fclean:
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
