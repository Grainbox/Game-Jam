/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** pause_button
*/

#include "jam.h"

void return_button(sfRenderWindow *menu_pause)
{
    sfVector2i pos_pause = sfMouse_getPositionRenderWindow(menu_pause);
    printf("%d ; %d\n", pos_pause.x, pos_pause.y);
    if (pos_pause.x >= 750 && pos_pause.x <= 1130) {
        if (pos_pause.y >= 490 && pos_pause.y <= 555)
            sfRenderWindow_close(menu_pause);
    }
}

void exit_pause(sfRenderWindow *menu_pause, sfRenderWindow *window)
{
    sfVector2i pos_pause = sfMouse_getPositionRenderWindow(menu_pause);
    printf("%d ; %d\n", pos_pause.x, pos_pause.y);
    if (pos_pause.x >= 670 && pos_pause.x <= 1225) {
        if (pos_pause.y >= 655 && pos_pause.y <= 745) {
            sfRenderWindow_close(menu_pause);
            sfRenderWindow_close(window);
        }
    }
}

void buttons_pause(sfRenderWindow *menu_pause, sfRenderWindow *window)
{
    sfVector2i pos_pause = sfMouse_getPositionRenderWindow(menu_pause);
    printf("%d ; %d\n", pos_pause.x, pos_pause.y);
    if (pos_pause.x >= 750 && pos_pause.x <= 1130) {
        if (pos_pause.y > 490 && pos_pause.y < 555)
            return_button(menu_pause);
    }
    if (pos_pause.x >= 670 && pos_pause.x <= 1225) {
        if (pos_pause.y >= 655 && pos_pause.y <= 745)
            exit_pause(menu_pause, window);
    }
}
