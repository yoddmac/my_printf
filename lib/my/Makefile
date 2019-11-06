##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Makefile
##

CC	=	ar rc

RMF	=	rm -rf

NAME	=	libmy.a

SRC	=	*.c

OBJ	=	*.o

all:	$(NAME)

$(NAME):
		cc -c $(SRC)
		$(CC) $(NAME) $(OBJ)
clean:
	$(RMF) $(OBJ)

fclean: clean
	$(RMF) $(NAME)

re:	fclean all

.PHONY:	re all clean fclean
