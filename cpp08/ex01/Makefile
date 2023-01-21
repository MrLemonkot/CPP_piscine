NAME_SPAN	=	span

SPAN		=	main.cpp Span.cpp

OBJ_SPAN	=	$(SPAN:.cpp=.o)

CPPFLAGS	=	-Wall -Wextra -Werror -std=c++98


all:			$(NAME_SPAN)

$(NAME_SPAN):	$(OBJ_SPAN)
	c++ $(CPPFLAGS) $(OBJ_SPAN) -o $@

%.o:			%.cpp %.hpp Makefile
	c++ $(CPPFLAGS) -c $< -o $@	

clean:
	rm -f $(OBJ_SPAN)

fclean:			clean
	rm -f $(NAME_SPAN)

re:				fclean all

.PHONY: 		all clean fclean re