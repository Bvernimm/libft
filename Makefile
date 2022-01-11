NAME = libft.a

SRCS = ${shell ls | grep -E "ft_.+\.c"}

OBJS = ${SRCS:.c=.o}

CC		= gcc

RM		= rm -f

CFLAGS = -Wall -Wextra -Werror -g

HEADER = libft.h

.c.o:
		${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

$(NAME): ${OBJS}
		ar rc ${NAME} ${OBJS}
		ranlib ${NAME}

all:	${NAME}

clean:
		${RM} ${OBJS}

fclean:	clean
		${RM} ${NAME}

re:		fclean all

.PHONY : all clean fclean re

