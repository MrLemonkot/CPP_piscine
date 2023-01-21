NAME  = abstract
SRCS  = $(wildcard *.cpp)
INCL  = $(wildcard *.hpp)
OBJS  = $(SRCS:.cpp=.o)

FLAGS = -Wall -Werror -Wextra 
FLAGS += -std=c++98
CC    = c++

all:    $(NAME)

$(NAME):  $(OBJS) $(INCL)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp $(INCL)
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re:	fclean all

.PHONY: all clean fclean re
