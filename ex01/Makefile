NAME = Scavtrap
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98 -O3

RM = rm -rf

SRCS = main.cpp ClapTrap.cpp ScavTrap.cpp
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	@echo "\033[0;33m\nCOMPILING Scavtrap...\n"
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
	@echo "\033[1;32m./Scavtrap created\n"

%.o: %.cpp
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME) Scavtrap

re: fclean all
