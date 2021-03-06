/*
** EPITECH PROJECT, 2022
** Game-Jam
** File description:
** menu settings
*/

#include "jam.h"

// settings main_menu -> settings or Pause -> settings or reverse
void settings_menu(all *opti, int playing)
{
    init_window(SCALE, opti);
    init_img(opti);
    init_song(opti);
    sfMusic_play(opti->settings.msc.music);
    while (sfRenderWindow_isOpen(WINDOW))
    {
        while (sfRenderWindow_pollEvent(WINDOW, &opti->settings.window.event)) {
            if (opti->settings.window.event.type == sfEvtClosed)
                sfRenderWindow_close(WINDOW);
        }
        sfRenderWindow_clear(WINDOW, sfWhite);
        sfRenderWindow_drawSprite(WINDOW, opti->settings.img[4].sprite, NULL);
        sfRenderWindow_drawSprite(WINDOW, opti->settings.img[1].sprite, NULL);
        sfRenderWindow_drawSprite(WINDOW, opti->settings.img[0].sprite, NULL);
        sfRenderWindow_drawSprite(WINDOW, opti->settings.img[3].sprite, NULL);
        sfRenderWindow_drawSprite(WINDOW, opti->settings.img[5].sprite, NULL);
        sfRenderWindow_display(WINDOW);
        check_pos(opti, playing);
    }
}
