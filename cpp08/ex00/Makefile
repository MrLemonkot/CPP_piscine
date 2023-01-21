NAME_EASYFIND	=	easyfind

EASYFIND		=	main.cpp

OBJ_EASYFIND	=	$(EASYFIND:.cpp=.o)

CPPFLAGS		=	-Wall -Wextra -Werror -std=c++98


all:			$(NAME_EASYFIND)

$(NAME_EASYFIND):	$(OBJ_EASYFIND)
	c++ $(CPPFLAGS) $(OBJ_EASYFIND) -o $@

%.o:			%.cpp %.hpp Makefile
	c++ $(CPPFLAGS) -c $< -o $@	

clean:
	rm -f $(OBJ_EASYFIND)

fclean:			clean
	rm -f $(NAME_EASYFIND)

re:				fclean all

.PHONY: 		all clean fclean re