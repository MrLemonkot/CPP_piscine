NAME = megaphone

SRCS = megaphone.cpp

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

.PHONY: all clean fclean re

all: $(NAME)
	
$(NAME):
	$(CC) $(FLAGS) megaphone.cpp -o $(NAME)

clean: 
	rm -rf megaphone.o

fclean: clean
	rm -rf $(NAME)

re: fclean all


	


