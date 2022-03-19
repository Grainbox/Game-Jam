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
    all opti;
    init_window(SCALE, &opti);
    init_img(&opti);
    init_song(&opti);
    sfMusic_play(opti.settings.msc.music);
    while (sfRenderWindow_isOpen(opti.settings.window.window))
    {
        while (sfRenderWindow_pollEvent(opti.settings.window.window, &opti.settings.window.event)) {
            if (opti.settings.window.event.type == sfEvtClosed)
                sfRenderWindow_close(opti.settings.window.window);
        }
        sfRenderWindow_clear(opti.settings.window.window, sfWhite);
        sfRenderWindow_drawSprite(opti.settings.window.window, opti.settings.img[1].sprite, NULL);
        sfRenderWindow_drawSprite(opti.settings.window.window, opti.settings.img[0].sprite, NULL);
        check_pos(&opti);
        sfRenderWindow_display(opti.settings.window.window);
    }
}
