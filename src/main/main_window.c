/*
** EPITECH PROJECT, 2022
** Game-Jam
** File description:
** main_window
*/

#include "jam.h"

window create_window(void)
{
    sfVideoMode m = {1280, 720, 32};
    char t[] = "JAM";
    sfRenderWindow *w = sfRenderWindow_create(m, t, sfResize | sfClose, NULL);
    sfEvent event;
    sfVertexArray *map = NULL;
    window screen = { m, w, event, map, NULL, NULL, NULL, NULL, NULL };

    sfRenderWindow_setFramerateLimit(screen.window, 60);
    return screen;
}
