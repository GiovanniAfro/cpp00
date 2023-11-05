# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gcavanna <gcavanna@student.42firenze.it    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/01 13:50:09 by gcavanna          #+#    #+#              #
#    Updated: 2023/11/05 15:29:59 by gcavanna         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = megaphone

SRC = MegaPhone.cpp
CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -rf

# Colors:
GREEN = \e[92m
YELLOW = \e[91m
GRAY = \e[90m
RESET = \e[0m

.PHONY: all clean fclean re

all: $(NAME)

$(NAME):
	@printf "$(GRAY)    - Compiling, stupid who reads $(NAME)... $(RESET)\n"
	@ $(CC) $(FLAGS) $(SRC) -o $(NAME)
	@printf "$(GREEN)    - yoyo the executable is here.$(RESET)\n"

clean:
	@$(RM) $(NAME)
	@printf "$(YELLOW)    - i'm done.$(RESET)\n"

fclean: clean

re: fclean all

