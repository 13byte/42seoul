# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jeosong <jeosong@student.42seoul.k>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/25 18:14:14 by jeosong           #+#    #+#              #
#    Updated: 2023/02/26 22:52:10 by jeosong          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
RM = rm

# compile option
CCFLAGS = -Wall -Wextra -Werror

# memory bug detection
ASANFLAGS = -g -fsanitize=address

# rm flag
RMFLAGS = -rf

# source directory
SRC_DIR = ./src

# object directory
OBJ_DIR = ./src

# header directory
INCLUDE = -Iinclude/

# Executable name
NAME = rush-02

SRCS = $(notdir $(wildcard ./src/cases.c \
	./src/ft_bring.c \
	./src/ft_check.c \
	./src/main.c \
	./src/print_cases.c \
	./src/set_dict.c))

OBJS = $(SRCS:.c=.o)

OBJECTS = $(patsubst %.o,$(OBJ_DIR)/%.o,$(OBJS))

.PHONY: all clean fclean re

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.c
	$(CC) $(CCFALGS) $(INCLUDE) -c $< -o $@

$(NAME) : $(OBJECTS)
	$(CC) $(CCFLAGS) $(OBJECTS) -o $(NAME)

all: $(NAME)

clean:
	$(RM) $(RMFLAGS) $(OBJECTS)

fclean: clean
	$(RM) $(RMFLAGS) $(NAME)

re: fclean all
