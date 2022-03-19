/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** pause_button
*/

#include "jam.h"

void buttons_pause(GLOBAL, int *playing)
{
    sfVector2i pos_pause = sfMouse_getPositionRenderWindow(opti->game.window);
    if (pos_pause.x >= 265 && pos_pause.x <= 537)
        if (pos_pause.y > 213 && pos_pause.y < 255)
            *playing = 1;
    if (pos_pause.x >= 267 && pos_pause.x <= 537)
        if (pos_pause.y >= 294 && pos_pause.y <= 336) {
            settings_menu(opti);
            *playing = 2;
        }
    if (pos_pause.x >= 325 && pos_pause.x <= 476)
        if (pos_pause.y >= 368 && pos_pause.y <= 410)
            *playing = 2;
}
