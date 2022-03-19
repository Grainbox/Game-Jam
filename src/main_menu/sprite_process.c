/*
** EPITECH PROJECT, 2022
** Game-Jam
** File description:
** sprite_process
*/

#include "jam.h"

main_menu settings_button(main_menu window)
{
    sfTexture *texture = NULL;
    sfSprite *sprite = sfSprite_create();
    sfVector2f scale = {10, 10};
    sfVector2f pos = { 265, 600 };

    texture = sfTexture_createFromFile("./content/options-button.png", NULL);
    sfSprite_setTexture(sprite, texture, sfTrue);
    sfSprite_setScale(sprite, scale);
    sfSprite_setPosition(sprite, pos);
    window.sprite2 = sprite;
    return window;
}

main_menu start_button(main_menu window)
{
    sfTexture *texture = NULL;
    sfSprite *sprite = sfSprite_create();
    sfVector2f scale = {10, 10};
    sfVector2f pos = { 265, 400 };

    texture = sfTexture_createFromFile("./content/start-button.png", NULL);
    sfSprite_setTexture(sprite, texture, sfTrue);
    sfSprite_setScale(sprite, scale);
    sfSprite_setPosition(sprite, pos);
    window.sprite1 = sprite;
    return window;
}
