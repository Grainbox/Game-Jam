/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** pause_button
*/

#include "jam.h"

void resume_button(GLOBAL, int *playing)
{
    sfVector2i pos_pause = sfMouse_getPositionRenderWindow(opti->game.window);
    if (pos_pause.x >= 750 && pos_pause.x <= 1130) {
        if (pos_pause.y >= 490 && pos_pause.y <= 555)
            *playing = 1;
    }
}

void break_settings_button(GLOBAL)
{
    sfVector2i pos_pause = sfMouse_getPositionRenderWindow(opti->game.window);
    if (pos_pause.x >= 1 && pos_pause.x <= 1) {
        if (pos_pause.y >= 1 && pos_pause.y <= 1) {
            settings_menu(opti);
        }
    }
}

void exit_game(GLOBAL)
{
    sfVector2i pos_pause = sfMouse_getPositionRenderWindow(opti->game.window);
    if (pos_pause.x >= 670 && pos_pause.x <= 1225) {
        if (pos_pause.y >= 655 && pos_pause.y <= 745) {
            sfRenderWindow_close(opti->game.window);
        }
    }
}

void buttons_pause(GLOBAL, int *playing, sfVector2i pos_pause)
{
    printf("%d x =  %d\n y = ", pos_pause.x, pos_pause.y);
    if (pos_pause.x >= 750 && pos_pause.x <= 1130) {
        if (pos_pause.y > 490 && pos_pause.y < 555)
            resume_button(opti, playing);
    }
    if (pos_pause.x >= 1 && pos_pause.x <= 1) {
        if (pos_pause.y >= 1 && pos_pause.y <= 1) {
            break_settings_button(opti);
        }
    }
    if (pos_pause.x >= 670 && pos_pause.x <= 1225) {
        if (pos_pause.y >= 655 && pos_pause.y <= 745)
            exit_game(opti);
    }
}
