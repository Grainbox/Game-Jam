##
## EPITECH PROJECT, 2021
## navy
## File description:
## Makefile
##

SRC	=	./src/main.c									\
		./src/main_menu/main_window.c					\
		./src/main_menu/check_event.c					\
		./src/main_menu/check_buttons.c					\
		./src/main_menu/sprite_process.c 				\
		./src/settings_menu/settings.c					\
		./src/settings_menu/init.c						\
		./src/settings_menu/define.c					\
		./src/settings_menu/button.c					\
		./src/game/check_event.c						\
		./src/game/game_window.c						\
		./src/game/sprite_process.c						\
		./src/pause_menu/display_break.c				\
		./src/init.c 									\

OBJ = $(SRC:.c=.o)

NAME = keeper

CFLAGS	+= -Wall -Wextra -W -I include -g

CSFML	=	-lcsfml-graphics -lcsfml-window -lcsfml-system -lcsfml-audio

all:	$(NAME)

$(NAME):	$(OBJ)
	make -C lib/my/
	gcc -o $(NAME) $(OBJ) -L lib/my -lmy $(CSFML)

apple:  $(OBJ)
		/usr/bin/arch -x86_64 gcc -v $(SRC) -o $(NAME) -I../includes $(CFLAGS) $(CSFML)

clean:
	rm -f $(OBJ)
	rm -f *~
	rm -f vgcore*
	rm -dr -f keeper.dSYM

fclean: clean
	make fclean -C lib/my/
	rm -f $(NAME)

re: fclean	all

.PHONY: clean fclean re
