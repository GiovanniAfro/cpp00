# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gcavanna <gcavanna@student.42firenze.it    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/01 13:50:09 by gcavanna          #+#    #+#              #
#    Updated: 2023/11/05 19:05:57 by gcavanna         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook
CC = g++
CFLAGS = -Wall -Wextra -Werror
SRCS = PhoneBook.class.cpp Contact.class.cpp main.cpp
OBJS = $(SRCS:.cpp=.o)

GREEN = \e[92m
RED = \e[91m
GRAY = \e[90m
RESET = \e[0m

all: $(NAME)

$(NAME): $(OBJS)
	@printf "$(GRAY)    - Compiling, stupid who reads $(NAME)... $(RESET)\n"
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)
	@printf "$(GREEN)    - yoyo the executable is here.$(RESET)\n"

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)
	@printf "$(RED)    - i'm done.$(RESET)\n"

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
