/*
** EPITECH PROJECT, 2022
** Game-Jam
** File description:
** main
*/

#include "jam.h"

// initialise la window
void init_window(int w, int h, int other, all *opti)
{
    sfVideoMode mode = {w, h, other};
    opti->settings.window.window = sfRenderWindow_create(mode, TITLE, sfClose, NULL);
}

void init_song(all *opti)
{
    opti->settings.msc.level = 50;
    opti->settings.msc.music = sfMusic_createFromFile("./content/street_fighter.ogg");
    sfMusic_setVolume(opti->settings.msc.music, opti->settings.msc.level);
}

void init_img(all *opti)
{
    opti->settings.img = malloc(32000);
    define_background(opti);
    define_back_img(opti);
    define_front_img(opti);
    button_back(opti);
    button_credit(opti);
}
