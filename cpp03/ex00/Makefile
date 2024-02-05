NAME = ex00
SRC_DIR		= ./
OBJ_DIR = obj/
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98 -MMD
RM = rm -rf

FILE =	main ClapTrap

SRC 		= $(addsuffix .cpp, $(FILE))
OBJ 		= 	$(addprefix $(OBJ_DIR), $(addsuffix .o, $(FILE)))
OBJF	=	.cache_exists
DEP = $(OBJ:%.o=%.d)

all:		$(NAME)
			@echo "\033[0;32m [OK] \033[0m       \033[0;33m Compiling:\033[0m" $<

$(NAME):	$(OBJ)
			$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

-include $(DEP)

$(OBJ_DIR)%.o: $(SRC_DIR)%.cpp | $(OBJF)
			@echo "\033[0;32m [OK] \033" $<
			$(CC) $(CFLAGS) -c $< -o $@

$(OBJF):
			mkdir -p $(OBJ_DIR)

clean:
			$(RM) -rf $(OBJ_DIR)

fclean:		clean
			$(RM) -f $(NAME)

re:		fclean all