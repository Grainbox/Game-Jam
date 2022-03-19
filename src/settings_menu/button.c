/*
** EPITECH PROJECT, 2022
** Game-Jam
** File description:
** menu settings
*/

#include "jam.h"

void button_song(all *opti)
{
    sfVector2i mouse_pos = sfMouse_getPosition((const sfWindow *)opti->settings.window.window);
    if (mouse_pos.y >= 476 && mouse_pos.y <= 526) {
        if (mouse_pos.x >= 152 && mouse_pos.x <= 650) {
            while (sfRenderWindow_pollEvent(opti->settings.window.window, &opti->settings.window.event)) {
                if (opti->settings.window.event.type == sfEvtMouseButtonPressed) {
                    printf("song\n");
                    int x = mouse_pos.x;
                    int y = 490;
                    sfVector2f pos = {x, y};
                    sfSprite_setPosition(opti->settings.img[1].sprite, pos);
                    change_level_son(opti);
                }
            }
        }
    }
} 

void check_pos(all *opti)
{
    sfVector2i mouse_pos = sfMouse_getPosition((const sfWindow *)opti->settings.window.window);
    button_song(opti);
}