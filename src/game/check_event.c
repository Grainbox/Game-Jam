/*
** Tom Daniel, 2022
** Game-Jam
** File description:
** check_event
*/

#include "jam.h"

void check_game_event(GLOBAL, int *event)
{
    while (sfRenderWindow_pollEvent(opti->game.window, &opti->game.event)) {
        if (opti->game.event.type == sfEvtClosed)
            sfRenderWindow_close(opti->game.window);
        if (sfKeyboard_isKeyPressed(sfKeyEscape) == sfTrue)
            if (display_break(*opti) == 1)
                *event = 1;
    }
}
