/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** pause_button
*/

#include "jam.h"

void resume_button(window *window, int *playing)
{
    sfVector2i pos_pause = sfMouse_getPositionRenderWindow(window->window);
    if (pos_pause.x >= 750 && pos_pause.x <= 1130) {
        if (pos_pause.y >= 490 && pos_pause.y <= 555) {
            display_break(&window);
            *playing = 1;
        }
    }
}

void exit_game(sfRenderWindow *menu_pause, sfRenderWindow *window)
{
    sfVector2i pos_pause = sfMouse_getPositionRenderWindow(menu_pause);
    if (pos_pause.x >= 670 && pos_pause.x <= 1225) {
        if (pos_pause.y >= 655 && pos_pause.y <= 745) {
            sfRenderWindow_close(window);
        }
    }
}

void buttons_pause(sfRenderWindow *menu_pause, sfRenderWindow *window)
{
    sfVector2i pos_pause = sfMouse_getPositionRenderWindow(menu_pause);
    if (pos_pause.x >= 750 && pos_pause.x <= 1130) {
        if (pos_pause.y > 490 && pos_pause.y < 555)
            return_button(menu_pause);
    }
    if (pos_pause.x >= 670 && pos_pause.x <= 1225) {
        if (pos_pause.y >= 655 && pos_pause.y <= 745)
            exit_pause(menu_pause, window);
    }
}
