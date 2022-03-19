/*
** EPITECH PROJECT, 2022
** Game-Jam
** File description:
** sprite_process
*/

#include "jam.h"

void break_background(GLOBAL)
{
    sfTexture *texture = NULL;
    sfSprite *sprite = sfSprite_create();
    sfVector2f scale = {2, 2};
    sfVector2f pos = { 40, 100 };

    texture = sfTexture_createFromFile("./content/break-background.png", NULL);
    sfSprite_setTexture(sprite, texture, sfTrue);
    sfSprite_setScale(sprite, scale);
    sfSprite_setPosition(sprite, pos);
    opti->game.sprite1 = sprite;
}

void create_setting_button(GLOBAL)
{
    sfTexture *texture = NULL;
    sfSprite *sprite = sfSprite_create();
    sfVector2f scale = {6, 6};
    sfVector2f pos = { 260, 280 };

    texture = sfTexture_createFromFile("./content/button-settings.png", NULL);
    sfSprite_setTexture(sprite, texture, sfTrue);
    sfSprite_setScale(sprite, scale);
    sfSprite_setPosition(sprite, pos);
    opti->game.sprite2 = sprite;
}

void create_exit_button(GLOBAL)
{
    sfTexture *texture = NULL;
    sfSprite *sprite = sfSprite_create();
    sfVector2f scale = {6, 6};
    sfVector2f pos = { 320, 355 };

    texture = sfTexture_createFromFile("./content/exit-button.png", NULL);
    sfSprite_setTexture(sprite, texture, sfTrue);
    sfSprite_setScale(sprite, scale);
    sfSprite_setPosition(sprite, pos);
    opti->game.sprite3 = sprite;
}

void create_resume_button(GLOBAL)
{
    sfTexture *texture = NULL;
    sfSprite *sprite = sfSprite_create();
    sfVector2f scale = {6, 6};
    sfVector2f pos = { 260, 200 };

    texture = sfTexture_createFromFile("./content/resume_button.png", NULL);
    sfSprite_setTexture(sprite, texture, sfTrue);
    sfSprite_setScale(sprite, scale);
    sfSprite_setPosition(sprite, pos);
    opti->game.sprite4 = sprite;
}
