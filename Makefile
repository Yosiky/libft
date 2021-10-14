RES =		test_func
NAME =		libft
SRC =		ft_bzero.c	\
			ft_isalnum.c\
			ft_isalpha.c	\
			ft_isascii.c	\
		   	ft_isdigit.c	\
			ft_isprint.c	\
			ft_memcpy.c	\
			ft_memset.c	\
			ft_strchr.c	\
			ft_strlen.c	\
			ft_strrchr.c	\
			ft_tolower.c	\
			ft_toupper.c	\
			ft_strncmp.c	\
			ft_memcmp.c	\
			ft_memchr.c	\
			ft_memmove.c	\
			ft_strnstr.c	\
			ft_strlcpy.c	\
			ft_strlcat.c	\
			ft_atoi.c	\
			ft_calloc.c	\
			ft_strdup.c	\
			ft_substr.c	\
			ft_strjoin.c	\
			ft_strtrim.c	\
			ft_split.c	\
			ft_itoa.c	\
			ft_strmapi.c	\
			ft_striteri.c	\
			ft_putchar_fd.c	\
			ft_putstr_fd.c	\
			ft_putendl_fd.c	\
			ft_putnbr_fd.c	\
			ft_lstnew.c		\
			ft_lstadd_front.c	\
			ft_lstsize.c		\
			ft_lstlast.c		\
			ft_lstadd_back.c	\
			ft_lstdelone.c		\
			ft_lstclear.c		\
			ft_lstiter.c		\
			ft_lstmap.c			

OBJ =		${SRC:.c=.o}
CFLAGS =	-Wall -Wextra -Werror -g 
#-O3 -ffast-math
CC =		gcc

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

all:		${NAME}

${NAME}:	${OBJ}
	ar cr ${NAME}.a ${OBJ}

clean:
	rm -rf ${OBJ}

fclean: 	clean
	rm -rf ${NAME}.a

re: 		clean	\
			fclean	\
			all
so:
	$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRC)
	$(CC) -nostartfiles -shared -o libft.so $(OBJ)
