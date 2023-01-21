CC := c++

TestingFlags := -g3 -pedantic -std=c++98

FLAGS := -Wall -Wextra -Werror $(TestingFlags)

SRC = main.cpp Harl.cpp
HEADERS = Harl.hpp

RM := rm -rf
NAME := harl

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
