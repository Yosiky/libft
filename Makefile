RES =		test_func
SRC =		ft_bzero	\
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
			ft_toupper	\
			ft_strncmp	\
			ft_memcmp	\
			ft_memchr	\
			ft_memmove	\
			ft_strnstr	\
			ft_strlcpy	\
			ft_strlcat	\
			ft_atoi		\
			ft_calloc	\
			ft_strdup	\
			ft_substr	

OBJ =		${SRC:=.o}
CFLAGS =	-Wall -Wextra -Werror -g
CC =		gcc

.c.o:
	${CC} ${FLAGS} -c $< -o ${<:.c=.o}

all:		${RES}

${RES}:	${OBJ}
	gcc ${OBJ} ${RES}.c -g -o ${RES}

clean:
	rm -rf ${OBJ}

fclean:
	rm -rf ${RES}

re: clean fclean all
