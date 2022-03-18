/*
** EPITECH PROJECT, 2022
** Game-Jam
** File description:
** main_window
*/

#include "jam.h"

window create_window(void)
{
    sfVideoMode m = { SCALE };
    char t[] = "Donovan The Building Keeper";
    sfRenderWindow *w = sfRenderWindow_create(m, t, sfResize | sfClose, NULL);
    sfEvent event;
    window screen = {m, w, event, NULL, NULL, NULL, NULL};

    screen = start_button(screen);
    sfRenderWindow_setFramerateLimit(screen.window, 60);
    return screen;
}

void write_window(window window)
{
    sfRenderWindow_clear(window.window, sfBlack);
    sfRenderWindow_drawSprite(window.window, window.sprite1, NULL);
    sfRenderWindow_display(window.window);
}

int main_menu(void)
{
    window window = create_window();

    while (sfRenderWindow_isOpen(window.window)) {
        write_window(window);
        check_close(window);
    }
    sfRenderWindow_destroy(window.window);
    return OK;
}
