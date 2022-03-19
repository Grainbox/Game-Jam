/*
** EPITECH PROJECT, 2022
** jam
** File description:
** display_break
*/

#include "jam.h"

int display_break(window *window)
{
    int playing = 0;

    while (playing == 0) {
        if (sfRenderWindow_pollEvent(window->window, &window->event) == sfTrue &&
            window->event.type == sfEvtClosed)
            return 1;
        sfRenderWindow_drawSprite(window->window, window->sprite2, NULL);
        sfRenderWindow_display(window->window);
        // sfRenderWindow_drawSprite(window->window, button_return, NULL);
        // sfRenderWindow_drawSprite(window->window, button_exit, NULL);
    }
    return 0;
}
