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

void button_back_content(all *opti)
{
    sfVector2i mouse_pos = sfMouse_getPosition((const sfWindow *)opti->settings.window.window);
    sfBool event = sfMouse_isButtonPressed(sfMouseLeft);
    if (mouse_pos.y >= 910 && mouse_pos.y <= 974) {
        if (mouse_pos.x >= 54 && mouse_pos.x <= 296) {
            if (event == sfTrue) {
                sfRenderWindow_destroy(opti->settings.window.window);
                sfMusic_stop(opti->settings.msc.music);
                open_main_menu(opti);
            }
        }
    }
}

void button_credits(all *opti)
{
    sfVector2i mouse_pos = sfMouse_getPosition((const sfWindow *)opti->settings.window.window);
    sfBool click = sfMouse_isButtonPressed(sfMouseLeft);
    if (mouse_pos.x >= 228 && mouse_pos.x <= 601) {
        if (mouse_pos.y >= 612 && mouse_pos.y <= 680) {
            if (click == sfTrue) {
                sfRenderWindow_close((const sfWindow *)opti->settings.window.window);
                open_credits(opti);
            }
        }
    }
}

void check_pos(all *opti)
{
    sfVector2i mouse_pos = sfMouse_getPosition((const sfWindow *)opti->settings.window.window);
    // printf("x = %d y = %d\n", mouse_pos.x, mouse_pos.y);
    button_song(opti);
    button_back_content(opti);
    button_credits(opti);
}