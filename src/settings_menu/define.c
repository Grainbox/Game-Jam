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
    SET_P(opti->settings.img[0].sprite, pos);
    sfSprite_setScale(opti->settings.img[0].sprite, size);
    opti->settings.img[0].texture = CREA_FILE("./content/back_life.png", NULL);
    SET_T(opti->settings.img[0].sprite, opti->settings.img[0].texture, sfTrue);
}

void button_back(all *opti)
{
    int x = 50;
    int y = 900;
    sfVector2f size = {8 ,8};
    sfVector2f pos = {x, y};
    opti->settings.img[3].sprite = sfSprite_create();
    SET_P(opti->settings.img[3].sprite, pos);
    sfSprite_setScale(opti->settings.img[3].sprite, size);
    opti->settings.img[3].texture = CREA_FILE("./content/back-button.png", NULL);
    SET_T(opti->settings.img[3].sprite, opti->settings.img[3].texture, sfTrue);
}

void define_play_song(all *opti)
{
    int x = 500;
    int y = 450;
    sfVector2f size = {1 ,1};
    sfVector2f pos = {x, y};
    opti->settings.img[0].sprite = sfSprite_create();
    SET_P(opti->settings.img[0].sprite, pos);
    sfSprite_setScale(opti->settings.img[0].sprite, size);
    opti->settings.img[0].texture = CREA_FILE("./content/play.png", NULL);
    SET_T(opti->settings.img[0].sprite, opti->settings.img[0].texture, sfTrue);
}

void define_front_img(all *opti)
{
    int x = ((opti->settings.msc.level * 450) + 150) / 100;
    printf("%d", x);
    int y = 490;
    sfVector2f size = {0.1 ,0.6};
    sfVector2f pos = {x, y};
    opti->settings.img[1].sprite = sfSprite_create();
    SET_P(opti->settings.img[1].sprite, pos);
    sfSprite_setScale(opti->settings.img[1].sprite, size);
    opti->settings.img[1].texture = CREA_FILE("./content/front_life.png", NULL);
    SET_T(opti->settings.img[1].sprite, opti->settings.img[1].texture, sfTrue);
}

void change_level_son(all *opti)
{
    sfVector2i mouse_pos = GET_P((const sfWindow *)opti->settings.window.window);
    if (mouse_pos.x >= 150 && mouse_pos.x <= 600) {
        int act = mouse_pos.x - 150;
        MSC_LV = 100 * act / 450;
        sfMusic_setVolume(opti->settings.msc.music, MSC_LV);
        printf("%d\n", MSC_LV);
    }
}

void define_background(all *opti)
{
    int x = 0;
    int y = 0;
    int i = 4;
    sfVector2f size = {1, 1};
    sfVector2f pos = {x, y};
    opti->settings.img[i].sprite = sfSprite_create();
    SET_P(opti->settings.img[i].sprite, pos);
    sfSprite_setScale(opti->settings.img[i].sprite, size);
    opti->settings.img[i].texture = CREA_FILE("./content/font_settings.png", NULL);
    SET_T(opti->settings.img[i].sprite, opti->settings.img[i].texture, sfTrue);
}

void button_credit(all *opti)
{
    int x = 225;
    int y = 600;
    sfVector2f size = {8 ,8};
    sfVector2f pos = {x, y};
    opti->settings.img[5].sprite = sfSprite_create();
    SET_P(opti->settings.img[5].sprite, pos);
    sfSprite_setScale(opti->settings.img[5].sprite, size);
    opti->settings.img[5].texture = CREA_FILE("./content/credits-button.png", NULL);
    SET_T(opti->settings.img[5].sprite, opti->settings.img[5].texture, sfTrue);
}