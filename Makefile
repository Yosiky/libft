RES =		test_func
SOURCE =	ft_bzero	\
			ft_isalnum	\
			ft_isalpha	\
			ft_isascii	\
		   	ft_isdigit	\
			ft_isprint	\
			ft_memcpy	\
			ft_memset	\
			ft_strchr	\
			ft_strlen	\
			ft_strrchr	\
			ft_tolower	\
			ft_toupper

OBJS =		${SOURCE:=.o}
FLAGS =		-Wall -Wextra -Werror -g

.c.o:
	gcc	${FLAGS} -c $< -o ${<:.c=.o}

all:		${RES}

${RES}:	${OBJS}
	gcc ${OBJS} ${RES}.c -o ${RES}

clean:
	rm -rf ${OBJS}

fclean:
	rm -rf ${RES}

re: clean fclean all
