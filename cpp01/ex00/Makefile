NAME = zombie

CC = g++

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = ./srcs/Zombie.cpp main.cpp ./srcs/randomChump.cpp ./srcs/newZombie.cpp
OBJ = $(SRC:.cpp=.o)

GREEN = \033[0;32m
RED = \033[0;31m
NC = \033[0m
YELLOW = \033[33m

all: $(NAME)

$(NAME): $(OBJ)
	g++ -o $(NAME) $(OBJ)
	@echo "$(GREEN)Compiled:$(NC) $<"
	@echo "$(GREEN)Compilation complete! \n$(YELLOW)$(NAME) is ready to execute.$(NC)"

clean:
	rm -rf $(OBJ)
	@echo "$(RED)Cleaned up object files.$(NC)"

fclean: clean
	rm -rf $(NAME)
	@echo "$(RED)Cleaned up executable.$(NC)"
re: fclean $(NAME)

.PHONY: all clean fclean re