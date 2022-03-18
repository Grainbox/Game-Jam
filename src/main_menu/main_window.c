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
    window screen = {m, w, event};

    sfRenderWindow_setFramerateLimit(screen.window, 60);
    return screen;
}

int main_menu(void)
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
