/*
** EPITECH PROJECT, 2022
** Game-Jam
** File description:
** menu settings
*/

#include "jam.h"

// settings main_menu -> settings or Pause -> settings or reverse
void settings_menu(void)
{
    sfVideoMode mode = {1920, 1080, 32};
    sfRenderWindow* window;
    sfTexture* texture;
    sfSprite* sprite;
    sfEvent event;
    window = sfRenderWindow_create(mode, "Menu Settings", sfResize | sfClose, NULL);

    while (sfRenderWindow_isOpen(window))
    {

        while (sfRenderWindow_pollEvent(window, &event)) {
            if (event.type == sfEvtClosed)
                sfRenderWindow_close(window);
        }

        sfRenderWindow_clear(window, sfBlack);

        //sfRenderWindow_drawSprite(window, sprite, NULL);

        sfRenderWindow_display(window);
    }
}