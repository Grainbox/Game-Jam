/*
** EPITECH PROJECT, 2022
** Game-Jam
** File description:
** main
*/

#include "jam.h"

#include <SFML/Graphics.h>

void check_close(window win)
{
    while (sfRenderWindow_pollEvent(win.window, &win.event)) {
        if (win.event.type == sfEvtClosed)
            sfRenderWindow_close(win.window);
    }
}

int main(void)
{
    window win = create_window();

    while (sfRenderWindow_isOpen(win.window)) {
        sfRenderWindow_clear(win.window, sfBlack);
        sfRenderWindow_display(win.window);
        check_close(win);
    }
    sfRenderWindow_destroy(win.window);
    return OK;
}
