NAME = ex01
SRC_DIR		= ./
OBJ_DIR = obj/
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98 -MMD
RM = rm -rf

FILE = Animal Cat Dog Brain main

SRC 		= $(addsuffix .cpp, $(FILE))
OBJ 		= 	$(addprefix $(OBJ_DIR), $(addsuffix .o, $(FILE)))
DEP = $(OBJ:%.o=%.d)

all:		$(NAME)

$(NAME):	$(OBJ)
			$(CC) $(CFLAGS) -o $(NAME) $(OBJ)
			@echo "\033[0;32m [OK] \033[0m       \033[0;33m Compiling:\033[0m" $(NAME)

-include $(DEP)

$(OBJ_DIR)%.o: $(SRC_DIR)%.cpp
			@echo "\033[0;32m [OK] \033" $<
			mkdir -p $(OBJ_DIR)
			$(CC) $(CFLAGS) -c $< -o $@


clean:
			$(RM) -rf $(OBJ_DIR)

fclean:		clean
			$(RM) -f $(NAME)

re:		fclean all