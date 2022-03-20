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

void create_sprite_player(GLOBAL)
{
    int x = PLAYER.x = 150;
    int y = PLAYER.y = 835;
    sfVector2f size = {3 ,3};
    sfVector2f pos = {x, y};
    PLAYER.sprite = sfSprite_create();
    SET_P(PLAYER.sprite, pos);
    sfSprite_setScale(PLAYER.sprite, size);
    PLAYER.texture = CREA_FILE("./content/sprt_player.png", NULL);
    SET_T(PLAYER.sprite, PLAYER.texture, sfTrue);
    PLAYER.rect = (sfIntRect) {33, 0, 11, 25};
    sfSprite_setTextureRect(PLAYER.sprite, PLAYER.rect);
}

void create_neigh_1(GLOBAL)
{
    int x = NEIGHBOOR[0].x = 200;
    int y = NEIGHBOOR[0].y = 700;
    sfVector2f size = {3 ,3};
    sfVector2f pos = {x, y};
    NEIGHBOOR[0].sprite = sfSprite_create();
    SET_P(NEIGHBOOR[0].sprite, pos);
    sfSprite_setScale(NEIGHBOOR[0].sprite, size);
    NEIGHBOOR[0].texture = CREA_FILE("./content/neighbor1.png", NULL);
    SET_T(NEIGHBOOR[0].sprite, NEIGHBOOR[0].texture, sfTrue);
    NEIGHBOOR[0].rect = (sfIntRect) {33, 0, 11, 25};
    sfSprite_setTextureRect(NEIGHBOOR[0].sprite, NEIGHBOOR[0].rect);
}

void create_neigh_2(GLOBAL)
{
    int x = NEIGHBOOR[1].x = 600;
    int y = NEIGHBOOR[1].y = 700;
    sfVector2f size = {3 ,3};
    sfVector2f pos = {x, y};
    NEIGHBOOR[1].sprite = sfSprite_create();
    SET_P(NEIGHBOOR[1].sprite, pos);
    sfSprite_setScale(NEIGHBOOR[1].sprite, size);
    NEIGHBOOR[1].texture = CREA_FILE("./content/neighbor2.png", NULL);
    SET_T(NEIGHBOOR[1].sprite, NEIGHBOOR[1].texture, sfTrue);
    NEIGHBOOR[1].rect = (sfIntRect) {33, 0, 11, 25};
    sfSprite_setTextureRect(NEIGHBOOR[1].sprite, NEIGHBOOR[1].rect);
}

void create_neigh_3(GLOBAL)
{
    int x = NEIGHBOOR[2].x = 250;
    int y = NEIGHBOOR[2].y = 592;
    sfVector2f size = {3 ,3};
    sfVector2f pos = {x, y};
    NEIGHBOOR[2].sprite = sfSprite_create();
    SET_P(NEIGHBOOR[2].sprite, pos);
    sfSprite_setScale(NEIGHBOOR[2].sprite, size);
    NEIGHBOOR[2].texture = CREA_FILE("./content/neighbor3.png", NULL);
    SET_T(NEIGHBOOR[2].sprite, NEIGHBOOR[2].texture, sfTrue);
    NEIGHBOOR[2].rect = (sfIntRect) {33, 0, 11, 25};
    sfSprite_setTextureRect(NEIGHBOOR[2].sprite, NEIGHBOOR[2].rect);
}

void create_neigh_4(GLOBAL)
{
    int x = NEIGHBOOR[3].x = 200;
    int y = NEIGHBOOR[3].y = 375;
    sfVector2f size = {3 ,3};
    sfVector2f pos = {x, y};
    NEIGHBOOR[3].sprite = sfSprite_create();
    SET_P(NEIGHBOOR[3].sprite, pos);
    sfSprite_setScale(NEIGHBOOR[3].sprite, size);
    NEIGHBOOR[3].texture = CREA_FILE("./content/neighbor4.png", NULL);
    SET_T(NEIGHBOOR[3].sprite, NEIGHBOOR[3].texture, sfTrue);
    NEIGHBOOR[3].rect = (sfIntRect) {33, 0, 11, 25};
    sfSprite_setTextureRect(NEIGHBOOR[3].sprite, NEIGHBOOR[3].rect);
}

void create_neigh_5(GLOBAL)
{
    int x = NEIGHBOOR[4].x = 500;
    int y = NEIGHBOOR[4].y = 483;
    sfVector2f size = {3 ,3};
    sfVector2f pos = {x, y};
    NEIGHBOOR[4].sprite = sfSprite_create();
    SET_P(NEIGHBOOR[4].sprite, pos);
    sfSprite_setScale(NEIGHBOOR[4].sprite, size);
    NEIGHBOOR[4].texture = CREA_FILE("./content/neighbor5.png", NULL);
    SET_T(NEIGHBOOR[4].sprite, NEIGHBOOR[4].texture, sfTrue);
    NEIGHBOOR[4].rect = (sfIntRect) {33, 0, 11, 25};
    sfSprite_setTextureRect(NEIGHBOOR[4].sprite, NEIGHBOOR[4].rect);
}

void create_neigh_6(GLOBAL)
{
    int x = NEIGHBOOR[5].x = 200;
    int y = NEIGHBOOR[5].y = 483;
    sfVector2f size = {3 ,3};
    sfVector2f pos = {x, y};
    NEIGHBOOR[5].sprite = sfSprite_create();
    SET_P(NEIGHBOOR[5].sprite, pos);
    sfSprite_setScale(NEIGHBOOR[5].sprite, size);
    NEIGHBOOR[5].texture = CREA_FILE("./content/neighbor6.png", NULL);
    SET_T(NEIGHBOOR[5].sprite, NEIGHBOOR[5].texture, sfTrue);
    NEIGHBOOR[5].rect = (sfIntRect) {33, 0, 11, 25};
    sfSprite_setTextureRect(NEIGHBOOR[5].sprite, NEIGHBOOR[5].rect);
}

void create_neigh_7(GLOBAL)
{
    int x = NEIGHBOOR[6].x = 550;
    int y = NEIGHBOOR[6].y = 375;
    sfVector2f size = {3 ,3};
    sfVector2f pos = {x, y};
    NEIGHBOOR[6].sprite = sfSprite_create();
    SET_P(NEIGHBOOR[6].sprite, pos);
    sfSprite_setScale(NEIGHBOOR[6].sprite, size);
    NEIGHBOOR[6].texture = CREA_FILE("./content/neighbor7.png", NULL);
    SET_T(NEIGHBOOR[6].sprite, NEIGHBOOR[6].texture, sfTrue);
    NEIGHBOOR[6].rect = (sfIntRect) {33, 0, 11, 25};
    sfSprite_setTextureRect(NEIGHBOOR[6].sprite, NEIGHBOOR[6].rect);
}

void create_neigh_8(GLOBAL)
{
    int x = NEIGHBOOR[7].x = 600;
    int y = NEIGHBOOR[7].y = 593;
    sfVector2f size = {3 ,3};
    sfVector2f pos = {x, y};
    NEIGHBOOR[7].sprite = sfSprite_create();
    SET_P(NEIGHBOOR[7].sprite, pos);
    sfSprite_setScale(NEIGHBOOR[7].sprite, size);
    NEIGHBOOR[7].texture = CREA_FILE("./content/neighbor8.png", NULL);
    SET_T(NEIGHBOOR[7].sprite, NEIGHBOOR[7].texture, sfTrue);
    NEIGHBOOR[7].rect = (sfIntRect) {33, 0, 11, 25};
    sfSprite_setTextureRect(NEIGHBOOR[7].sprite, NEIGHBOOR[7].rect);
}

void create_neigh_9(GLOBAL)
{
    int x = NEIGHBOOR[8].x = 150;
    int y = NEIGHBOOR[8].y = 265;
    sfVector2f size = {3 ,3};
    sfVector2f pos = {x, y};
    NEIGHBOOR[8].sprite = sfSprite_create();
    SET_P(NEIGHBOOR[8].sprite, pos);
    sfSprite_setScale(NEIGHBOOR[8].sprite, size);
    NEIGHBOOR[8].texture = CREA_FILE("./content/king.png", NULL);
    SET_T(NEIGHBOOR[8].sprite, NEIGHBOOR[8].texture, sfTrue);
    NEIGHBOOR[8].rect = (sfIntRect) {33, 0, 11, 25};
    sfSprite_setTextureRect(NEIGHBOOR[8].sprite, NEIGHBOOR[8].rect);
}
