NAME = bureaucrat

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp ./srcs/Bureaucrat.cpp ./srcs/AForm.cpp ./srcs/ShrubberyCreationForm.cpp ./srcs/RobotomyRequestForm.cpp ./srcs/PresidentialPardonForm.cpp
OBJ = $(SRC:.cpp=.o)

GREEN = \033[0;32m
RED = \033[0;31m
NC = \033[0m
YELLOW = \033[33m

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) -o $(NAME) $(OBJ)
	@echo "$(GREEN)Compilation complete! \n$(YELLOW)$(NAME) is ready to execute.$(NC)"

%.o: %.cpp
	@$(CC) $(CFLAGS) -c $< -o $@
	@echo "$(GREEN)Compiled:$(NC) $<"

clean:
	@rm -rf $(OBJ)
	@rm -rf *.txt
	@echo "$(RED)Cleaned up object files.$(NC)"

fclean: clean
	@rm -rf $(NAME)
	@rm -rf *.txt
	@echo "$(RED)Cleaned up executable.$(NC)"

re: fclean all

.PHONY: all clean fclean re