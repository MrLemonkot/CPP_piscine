NAME_MUTANT	=	mutant

MUTANT		=	main.cpp

OBJ_MUTANT	=	$(MUTANT:.cpp=.o)

CPPFLAGS	=	-Wall -Wextra -Werror -std=c++98


all:			$(NAME_MUTANT)

$(NAME_MUTANT):	$(OBJ_MUTANT)
	c++ $(CPPFLAGS) $(OBJ_MUTANT) -o $@

%.o:			%.cpp %.hpp Makefile
	c++ $(CPPFLAGS) -c $< -o $@	

clean:
	rm -f $(OBJ_MUTANT)

fclean:			clean
	rm -f $(NAME_MUTANT)

re:				fclean all

.PHONY: 		all clean fclean re