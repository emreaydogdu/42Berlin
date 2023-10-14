# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lkioukou <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/01 11:23:38 by lkioukou          #+#    #+#              #
#    Updated: 2023/04/02 11:29:13 by lkioukou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
.PHONY: all fclean clean re

NAME = rush-02

SRC = main.c ft_helper.c ft_logic.c ft_file.c ft_math.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME):$(OBJ)
	cc -Werror -Wextra -Wall -o $(NAME) $^
%.o: %.c
	cc -Werror -Wextra -Wall -c $< -o $@
fclean:clean
	/bin/rm -f $(NAME)
clean:
	/bin/rm -f *.o
	

re: fclean all

