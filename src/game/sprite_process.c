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

window break_background(window window)
{
    sfTexture *texture = NULL;
    sfSprite *sprite = sfSprite_create();
    sfVector2f scale = {2, 2};
    sfVector2f pos = { 40, 100 };

    texture = sfTexture_createFromFile("./content/break-background.png", NULL);
    sfSprite_setTexture(sprite, texture, sfTrue);
    sfSprite_setScale(sprite, scale);
    sfSprite_setPosition(sprite, pos);
    window.sprite2 = sprite;
    return window;
}

window create_setting_button(window window)
{
    sfTexture *texture = NULL;
    sfSprite *sprite = sfSprite_create();
    sfVector2f scale = {2.5, 2.5};
    sfVector2f pos = { 100, 100 };

    texture = sfTexture_createFromFile("./content/button-settings.png", NULL);
    sfSprite_setTexture(sprite, texture, sfTrue);
    sfSprite_setScale(sprite, scale);
    sfSprite_setPosition(sprite, pos);
    window.sprite3 = sprite;
    return window;
}

window create_exit_button(window window)
{
    sfTexture *texture = NULL;
    sfSprite *sprite = sfSprite_create();
    sfVector2f scale = {2.67, 2.6};
    sfVector2f pos = { 0, 0 };

    texture = sfTexture_createFromFile("./content/exit-button.png", NULL);
    sfSprite_setTexture(sprite, texture, sfTrue);
    sfSprite_setScale(sprite, scale);
    sfSprite_setPosition(sprite, pos);
    window.sprite4 = sprite;
    return window;
}
