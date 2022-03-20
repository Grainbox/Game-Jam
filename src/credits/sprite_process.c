/*
** Tom Daniel, 2022
** Game-Jam
** File description:
** sprite_process
*/

#include "jam.h"

window credit_background(window window)
{
    sfTexture *texture = NULL;
    sfSprite *sprite = sfSprite_create();
    sfVector2f scale = {1, 0.9};
    sfVector2f pos = { 0, 0 };

    texture = sfTexture_createFromFile("./content/game_credit.png", NULL);
    sfSprite_setTexture(sprite, texture, sfTrue);
    sfSprite_setScale(sprite, scale);
    sfSprite_setPosition(sprite, pos);
    window.sprite1 = sprite;
    return window;
}

window credit_back_button(window window)
{
    sfTexture *texture = NULL;
    sfSprite *sprite = sfSprite_create();
    sfVector2f scale = {7, 7};
    sfVector2f pos = { 300, 900 };

    texture = sfTexture_createFromFile("./content/back-button.png", NULL);
    sfSprite_setTexture(sprite, texture, sfTrue);
    sfSprite_setScale(sprite, scale);
    sfSprite_setPosition(sprite, pos);
    window.sprite2 = sprite;
    return window;
}
