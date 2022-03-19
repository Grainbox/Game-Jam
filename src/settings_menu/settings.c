/*
** EPITECH PROJECT, 2022
** Game-Jam
** File description:
** menu settings
*/

#include "jam.h"

// initialise la window
void init_window(int w, int h, int other, all *opti)
{
    sfVideoMode mode = {w, h, other};
    opti->settings.window.window = sfRenderWindow_create(mode, TITLE, sfResize | sfClose, NULL);
}

void define_back_img(all *opti)
{
    opti->settings.img[0].sprite = sfSprite_create();
    opti->settings.img[0].texture = sfTexture_createFromFile("./content/back_life.png", NULL);
    sfSprite_setTexture(opti->settings.img[0].sprite, opti->settings.img[0].texture, sfTrue);
}

void init_img(all *opti)
{
    opti->settings.img = malloc(sizeof(opti->settings.img) * 10);
    define_back_img(opti);
}

// settings main_menu -> settings or Pause -> settings or reverse
void settings_menu(void)
{
    all opti;
    init_window(SCALE, &opti);
    init_img(&opti);
    while (sfRenderWindow_isOpen(opti.settings.window.window))
    {
        while (sfRenderWindow_pollEvent(opti.settings.window.window, &opti.settings.window.event)) {
            if (opti.settings.window.event.type == sfEvtClosed)
                sfRenderWindow_close(opti.settings.window.window);
        }

        sfRenderWindow_clear(opti.settings.window.window, sfWhite);

        sfRenderWindow_drawSprite(opti.settings.window.window, opti.settings.img[0].sprite, NULL);

        sfRenderWindow_display(opti.settings.window.window);
    }
}
