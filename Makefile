# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vvaras <vvaras@student.42.us.org>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/01/02 11:18:17 by vvaras            #+#    #+#              #
#    Updated: 2019/01/03 12:10:08 by vvaras           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

DIR_SRC	= ./src
DIR_INC	= ./includes
DIR_OBJ	= ./obj

RAW_SRC	:= $(shell find $(DIR_SRC) -type f | grep -E "\.c$$")
RAW_DIRS:= $(shell find $(DIR_SRC) -type d -mindepth 1)
SRCDIRS = $(RAW_DIRS:./src/%=%)
SRC		= $(RAW_SRC:./src/%=%)
OBJ		= $(addprefix $(DIR_OBJ)/,$(SRC:.c=.o))

FT_NAME := libft.a

CC		= gcc
CFLAGS	= -Wall -Wextra -Werror
CFLAGS += -O3 -march=native -pipe

.PHONY: all clean fclean re

all: $(DIR_OBJ) $(FT_NAME)

$(DIR_OBJ):
	mkdir -p $(DIR_OBJ)
	mkdir -p $(addprefix $(DIR_OBJ)/,$(SRCDIRS))

$(DIR_OBJ)/%.o:$(DIR_SRC)/%.c
	$(CC) $(CFLAGS) -I /includes -o $@ -c $<

$(FT_NAME): $(OBJ)
	ar rc $(FT_NAME) $(OBJ)
	ranlib $(FT_NAME)

clean:
	rm -rf $(DIR_OBJ)

fclean: clean
	rm -f $(FT_NAME)

re:
	@$(MAKE) fclean --no-print-directory
	@$(MAKE) all --no-print-directory
