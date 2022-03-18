##
## EPITECH PROJECT, 2021
## navy
## File description:
## Makefile
##

SRC	=	src/main.c									\
		src/main_menu/main_window.c					\
		src/main_menu/check_event.c					\
		src/settings_menu/settings.c 				\

OBJ = $(SRC:.c=.o)

NAME = jam

CFLAGS	+= -Wall -Wextra -W -I include -g

CSFML	=	-lcsfml-graphics -lcsfml-window -lcsfml-system

all:	$(NAME)

$(NAME):	$(OBJ)
	make -C lib/my/
	gcc -o $(NAME) $(OBJ) -L lib/my -lmy $(CSFML)

apple:  $(OBJ)
		/usr/bin/arch -x86_64 gcc $(SRC) -o $(NAME) -I../includes $(CFLAGS) $(CSFML)

clean:
	rm -f $(OBJ)
	rm -f *~
	rm -f vgcore*

fclean: clean
	make fclean -C lib/my/
	rm -f $(NAME)

re: fclean	all

.PHONY: clean fclean re
