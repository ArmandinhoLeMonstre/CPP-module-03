NAME = ex00
CC = g++
CFLAGS = -Wall -Wextra -Werror -std=c++98 -O3

RM = rm -rf

OBJ = main.cpp ClapTrap.cpp

all : $(NAME)

$(NAME) : $(OBJ)
	@echo "\033[0;33m\nCOMPILING ex00...\n"
	@$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
	@echo "\033[1;32m./ex00 created\n"

clean :
	$(RM) ex00

fclean : clean
	$(RM) ex00

re : fclean all