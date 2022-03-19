/*
** Tom Daniel, 2022
** Game-Jam
** File description:
** spite_process
*/

#include "jam.h"

window game_background(window window)
{
    sfTexture *texture = NULL;
    sfSprite *sprite = sfSprite_create();
    sfVector2f scale = {2.67, 2.6};
    sfVector2f pos = { 0, 0 };

    texture = sfTexture_createFromFile("./content/game-background.png", NULL);
    sfSprite_setTexture(sprite, texture, sfTrue);
    sfSprite_setScale(sprite, scale);
    sfSprite_setPosition(sprite, pos);
    window.sprite1 = sprite;
    return window;
}
