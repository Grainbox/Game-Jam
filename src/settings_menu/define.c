/*
** EPITECH PROJECT, 2022
** Game-Jam
** File description:
** define
*/

#include "jam.h"

void define_back_img(all *opti)
{
    int x = 150;
    int y = 450;
    sfVector2f size = {1 ,2};
    sfVector2f pos = {x, y};
    opti->settings.img[0].sprite = sfSprite_create();
    sfSprite_setPosition(opti->settings.img[0].sprite, pos);
    sfSprite_setScale(opti->settings.img[0].sprite, size);
    opti->settings.img[0].texture = sfTexture_createFromFile("./content/back_life.png", NULL);
    sfSprite_setTexture(opti->settings.img[0].sprite, opti->settings.img[0].texture, sfTrue);
}

void define_play_song(all *opti)
{
    int x = 500;
    int y = 450;
    sfVector2f size = {1 ,1};
    sfVector2f pos = {x, y};
    opti->settings.img[0].sprite = sfSprite_create();
    sfSprite_setPosition(opti->settings.img[0].sprite, pos);
    sfSprite_setScale(opti->settings.img[0].sprite, size);
    opti->settings.img[0].texture = sfTexture_createFromFile("./content/play.png", NULL);
    sfSprite_setTexture(opti->settings.img[0].sprite, opti->settings.img[0].texture, sfTrue);
}

void define_front_img(all *opti)
{
    int x = 225;
    int y = 490;
    sfVector2f size = {0.1 ,0.6};
    sfVector2f pos = {x, y};
    opti->settings.img[1].sprite = sfSprite_create();
    sfSprite_setPosition(opti->settings.img[1].sprite, pos);
    sfSprite_setScale(opti->settings.img[1].sprite, size);
    opti->settings.img[1].texture = sfTexture_createFromFile("./content/front_life.png", NULL);
    sfSprite_setTexture(opti->settings.img[1].sprite, opti->settings.img[1].texture, sfTrue);
}

void change_level_son(all *opti)
{
    sfVector2i mouse_pos = sfMouse_getPosition((const sfWindow *)opti->settings.window.window);
    if (mouse_pos.x >= 150 && mouse_pos.x <= 600) {
        int act = mouse_pos.x - 150;
        opti->settings.msc.level = 100 * act / 450;
        sfMusic_setVolume(opti->settings.msc.music, opti->settings.msc.level);
        printf("%d\n", opti->settings.msc.level);
    }
}
