NAME	= Intern

GCC	= c++  

FLAGS	= -Wall -Wextra -Werror -std=c++98

SRCS	= main.cpp	Bureaucrat.cpp	Form.cpp \
	PresidentialPardonForm.cpp RobotomyRequestForm.cpp \
	ShrubberyCreationForm.cpp	Intern.cpp

OBJS	= $(SRCS:.cpp=.o)

%.o: %.cpp Makefile Bureaucrat.hpp Form.hpp \
	PresidentialPardonForm.hpp RobotomyRequestForm.hpp \
	ShrubberyCreationForm.hpp Intern.hpp
	
	$(GCC) $(FLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJS)
	$(GCC) $(FLAGS) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY : all clean fclean re