CC := c++

TestingFlags := -pedantic -std=c++98

FLAGS := -Wall -Wextra -Werror $(TestingFlags)

SRC = ClapTrap.cpp main.cpp
HEADERS = ClapTrap.hpp

RM := rm -rf
NAME := a.out

DIR := obj/
OBJ := $(addprefix $(DIR), $(SRC:.cpp=.o))

all: $(NAME)

$(NAME): $(DIR) $(HEADERS) $(OBJ) $(SRC)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

$(DIR)%.o : %.cpp $(HEADERS)
	$(CC) $(FLAGS) -c $< -o $@

$(DIR) :
	mkdir $(DIR)

clean:
	$(RM) $(DIR)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
