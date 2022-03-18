##
## EPITECH PROJECT, 2021
## navy
## File description:
## Makefile
##

SRC	=	src/main.c

OBJ = $(SRC:.c=.o)

NAME = jam

CFLAGS	+= -Wall -Wextra -W -I include -g

CSFML	=	-lcsfml-graphics -lcsfml-window -lcsfml-system

all:	$(NAME)

$(NAME):	$(OBJ)
	make -C lib/my/
	gcc -o $(NAME) $(OBJ) $(CSFML) -L lib/my -lmy

clean:
	rm -f $(OBJ)
	rm -f *~
	rm -f vgcore*

fclean: clean
	make fclean -C lib/my/
	rm -f $(NAME)

re: fclean	all

.PHONY: clean fclean re
