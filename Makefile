##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Makefile
##

RM	=	rm -rf

SRC	=	$(./lib/my/Makefile)

OBJ	=	$(SRC:.=.o)

NAME	=	libmy.a

all:	$(NAME)

$(NAME) : $(OBJ)
	$(MAKE) -C ./lib/my

clean:
	$(RM) *.c~
	$(RM) ./lib/my/*.o
	$(RM) ./lib/my/include/*.gch

fclean:
	$(RM) $(NAME)
	$(RM) ./lib/my/$(NAME)

re:	fclean all

.PHONY:	re all clean fclean