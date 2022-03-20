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

void create_player(GLOBAL)
{
    int x = 150;
    int y = 845;
    sfVector2f size = {3 ,3};
    sfVector2f pos = {x, y};
    PLAYER.sprite = sfSprite_create();
    SET_P(PLAYER.sprite, pos);
    sfSprite_setScale(PLAYER.sprite, size);
    PLAYER.texture = CREA_FILE("./content/sprt_player.png", NULL);
    SET_T(PLAYER.sprite, PLAYER.texture, sfTrue);
    printf("player.init\n");
    PLAYER.rect = (sfIntRect) {33, 0, 11, 25};
    sfSprite_setTextureRect(PLAYER.sprite, PLAYER.rect);
}
