/*
** Tom Daniel, 2022
** Game-Jam
** File description:
** check_event
*/

#include "jam.h"

void check_game_event(window win, int *event)
{
    while (sfRenderWindow_pollEvent(win.window, &win.event)) {
        if (win.event.type == sfEvtClosed)
            sfRenderWindow_close(win.window);
    }
}
