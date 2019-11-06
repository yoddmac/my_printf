##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Makefile
##

CC	=	ar rc

RMF	=	rm -rf

NAME	=	libmy.a

COUNT_FLAGS	=	-I./include/ -L./lib/ -lmy

SRC	=	*.c

OBJ	=	*.o

all:	gcc compil move

gcc:
	gcc -c $(SRC)
compil:
	$(CC) $(NAME) $(OBJ)

move:
	mv $(NAME) ./../
	cp my.h ./../../include

clean:
	$(RMF) $(OBJ)

fclean: clean
		$(RMF) $(NAME)

re:	fclean all

.PHONY:	re all clean fclean