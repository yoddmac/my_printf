##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Makefile
##

CC	=	gcc

RM	=	rm -rf

NAME	=	my_printf

CFLAGS	+=	-W -Wall -Wextra -I./include/ -L./lib -lmy -g 

SRC	=	my_printf.c \
		my_flags.c

OBJ	=	$(SRC:.c=.o)
OBJ	=	$(SRC:.c=.c~)
OBJ	=	$(SRC:.c=.dSYM)

all: compil

compil:	$(SRC)
	(cd ./lib/my/; make)
	$(CC) -o $(NAME) $(SRC) $(CFLAGS)

valgrind: $(SRC)
	$(CC) -g $(NAME) $(SRC) $(FLAGS)

clean:
	$(RM) $(OBJ)
	$(RM) $(OBJ)

fclean:
	$(RM) $(NAME)

re:	fclean all

PHONY:	re all clean fclean