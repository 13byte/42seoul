# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jeosong <jeosong@student.42seoul.k>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/01 19:50:46 by jeosong           #+#    #+#              #
#    Updated: 2023/03/01 23:43:17 by jeosong          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
RM = rm
AR = ar

CCFLAGS = -Wall -Wextra -Werror
RMFLAGS = -rf
ARFLAGS = rcs

SRC_DIR = srcs
SRCS = $(SRC_DIR)/ft_putchar.c $(SRC_DIR)/ft_swap.c $(SRC_DIR)/ft_putstr.c \
	   $(SRC_DIR)/ft_strlen.c $(SRC_DIR)/ft_strcmp.c

INCLUDE = -Iincludes/

OBJS = $(SRCS:.c=.o)

NAME = libft.a

%.o: %.c
	$(CC) $(CCFLAGS) $(INCLUDE) -c $< -o $@

$(NAME): $(OBJS)
	$(AR) $(ARFLAGS) $@ $(OBJS)

all: $(NAME)

clean:
	$(RM) $(RMFLAGS) $(OBJS)

fclean:
	make clean
	$(RM) $(RMFLAGS) $(NAME)

re:
	make fclean
	make all

.PHONY: all clean fclean re
