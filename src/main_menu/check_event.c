/*
** EPITECH PROJECT, 2022
** Game-Jam
** File description:
** check_event
*/

#include "jam.h"

void check_close(main_menu win)
{
    while (sfRenderWindow_pollEvent(win.window, &win.event)) {
        if (win.event.type == sfEvtClosed)
            sfRenderWindow_close(win.window);
    }
}
