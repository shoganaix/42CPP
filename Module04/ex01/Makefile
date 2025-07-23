NAME	 = ex01

CPP		 = c++
STD		 = -std=c++98
CPPFLAGS = -Wall -Wextra -Werror $(STD)


RED		 = \033[1;31m
YELLOW	 = \033[1;33m
BLUE	 = \033[1;34m
RESET	 = \033[0m


SRCS	 = main.cpp Animal.cpp Cat.cpp Dog.cpp WrongCat.cpp WrongDog.cpp Brain.cpp
OBJS	 = $(SRCS:.cpp=.o)

RM		 = /bin/rm -rf

all:		$(NAME) 

${NAME}:	${OBJS}
			@echo "$(YELLOW)LInking: $<$(RESET)"
			${CPP} $(OBJS) -o $@

%.o: %.cpp
			@echo "$(BLUE)Compiling: $<$(RESET)"
			$(CPP) $(CPPFLAGS) -o $@ -c $<

clean:

			$(RM) $(OBJS)
			@echo "$(RED)Cleaning object files...$(RESET)"

fclean:		clean
			$(RM) $(NAME)
			@echo "$(RED)Removing executable...$(RESET)"

re:			fclean all

.PHONY:		all clean fclean format re