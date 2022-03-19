/*
** Tom Daniel, 2022
** Game-Jam
** File description:
** sprite_process
*/

#include "jam.h"

// create exit_button sprite
main_menu exit_button(main_menu window)
{
    sfTexture *texture = NULL;
    sfSprite *sprite = sfSprite_create();
    sfVector2f scale = {10, 10};
    sfVector2f pos = { 270, 730 };

    texture = sfTexture_createFromFile("./content/exit-button.png", NULL);
    sfSprite_setTexture(sprite, texture, sfTrue);
    sfSprite_setScale(sprite, scale);
    sfSprite_setPosition(sprite, pos);
    window.sprite3 = sprite;
    return window;
}

// create setting_button sprite
main_menu settings_button(main_menu window)
{
    sfTexture *texture = NULL;
    sfSprite *sprite = sfSprite_create();
    sfVector2f scale = {10, 10};
    sfVector2f pos = { 175, 555 };

    texture = sfTexture_createFromFile("./content/options-button.png", NULL);
    sfSprite_setTexture(sprite, texture, sfTrue);
    sfSprite_setScale(sprite, scale);
    sfSprite_setPosition(sprite, pos);
    window.sprite2 = sprite;
    return window;
}

// create start_button sprite
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
