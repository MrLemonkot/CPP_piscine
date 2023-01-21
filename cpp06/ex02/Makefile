NAME_CONVERT	=	identify

CONVERT			=	main.cpp

OBJ_CONVERT		=	$(CONVERT:.cpp=.o)

CPPFLAGS		=	-Wall -Wextra -Werror -std=c++98


all:			$(NAME_CONVERT)

$(NAME_CONVERT):	$(OBJ_CONVERT)
	c++ $(CPPFLAGS) $(OBJ_CONVERT) -o $@

%.o:			%.cpp %.hpp Makefile
	c++ $(CPPFLAGS) -c $< -o $@	

clean:
	rm -f $(OBJ_CONVERT)

fclean:			clean
	rm -f $(NAME_CONVERT)

re:				fclean all

.PHONY: 		all clean fclean re