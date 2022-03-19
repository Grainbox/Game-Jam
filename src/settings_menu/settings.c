/*
** EPITECH PROJECT, 2022
** Game-Jam
** File description:
** menu settings
*/

#include "jam.h"

void init_window(int w, int h, int other, all *opti)
{
    sfVideoMode mode = {w, h, other};
    opti->settings.window.window = sfRenderWindow_create(mode, "Menu Settings", sfResize | sfClose, NULL);
}

// settings main_menu -> settings or Pause -> settings or reverse
void settings_menu(void)
{
    all opti;
    init_window(SCALE, &opti);
    while (sfRenderWindow_isOpen(opti.settings.window.window))
    {
        while (sfRenderWindow_pollEvent(opti.settings.window.window, &opti.settings.window.event)) {
            if (opti.settings.window.event.type == sfEvtClosed)
                sfRenderWindow_close(opti.settings.window.window);
        }

        sfRenderWindow_clear(opti.settings.window.window, sfWhite);

        //sfRenderWindow_drawSprite(window, sprite, NULL);

        sfRenderWindow_display(opti.settings.window.window);
    }
}