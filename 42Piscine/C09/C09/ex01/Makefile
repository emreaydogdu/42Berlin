SRCS = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c srcs/ft_swap.c
OBJS = ${SRCS:.c=.o}
LIB  = libft.a
HEADERS	= includes/

all: ${LIB}

.c.o:
	gcc -Wall -Wextra -Werror -I ${HEADERS} -c $< -o ${<:.c=.o}

${LIB} : ${OBJS}
	ar rc ${LIB} ${OBJS}

clean:
	rm -f ${OBJS}

fclean: clean
	rm -f ${LIB}

re: fclean all