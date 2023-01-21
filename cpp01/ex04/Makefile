NAME		=	sed_is_for_loser

C_FILE		=	main.cpp	\
				File.cpp

SRC_DIR		=	./

SRC			=	$(addprefix $(SRC_DIR), $(C_FILE))

OBJ			=	$(SRC: .cpp=.o)

O_FILE		=	$(addprefix $(SRC_DIR), *.o)

CC			=	c++

FLAG		=	-Wall -Wextra -Werror -std=c++98

.cpp.o:
	$(CC) $(FLAG) $(SRC) -c $< -o $@

$(NAME): $(OBJ)
	$(CC) $(FLAG) $(SRC) -o $(NAME)

all: $(NAME)

clean:
	/bin/rm -rf $(O_FILE)

fclean: clean
	/bin/rm -rf $(NAME)

re: fclean all

.PHONY: all re clean fclean
