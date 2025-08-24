# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahabbard <ahabbard@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/08/24 23:35:41 by ahabbard          #+#    #+#              #
#    Updated: 2025/08/24 23:35:47 by ahabbard         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = rush02
CC = gcc
CFLAGS = -Wall -Wextra -Werror

SRC = core.c main.c parse_arg.c parse_dict.c parse_input.c \
utils_array.c utils_box_1.c utils_box_2.c utils_display.c

OBJ = $(SRC:.c=.o)

$(NAME): $(OBJ)
$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

clean:
rm -f $(OBJ)

fclean: clean
rm -f $(NAME)

re: fclean $(NAME)