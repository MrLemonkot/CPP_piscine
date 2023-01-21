
NAME			=	Unnecessary_violence

CC				=	c++

FLAG			= -Wall -Wextra -Werror -std=c++98

C_FILE			=	main.cpp		\
					Weapon.cpp		\
					HumanA.cpp		\
					HumanB.cpp

SRC_DIR			=	./

SRC				=	$(addprefix $(SRC_DIR), $(C_FILE))

O_FILE			=	$(addprefix $(SRC_DIR), *.o)

OBJ				=	$(SRC: .cpp=.o)

.cpp.o:
	$(CC) $(FLAG) $(SRC) -c $< -o $@

$(NAME): $(OBJ)
	$(CC) $(FLAG) $(SRC) -o $(NAME)

all: $(NAME)

clean:
	/bin/rm -rf $(O_FILE)

fclean: clean
	/bin/rm -rf	$(NAME)

re: fclean all

.PHONY: all re clean fclean
