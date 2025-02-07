NAME = Fragtrap
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98 -O3

RM = rm -rf

SRCS = main.cpp ClapTrap.cpp FragTrap.cpp ScavTrap.cpp
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	@echo "\033[0;33m\nCOMPILING Fragtrap...\n"
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
	@echo "\033[1;32m./Fragtrap created\n"

%.o: %.cpp
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME) Fragtrap

re: fclean all
