/*
** Mathieu Rio, 2022
** Game-Jam
** File description:
** game_window
*/

#include "jam.h"

void move_rect(sfIntRect *rect, int offset, int max_value)
{
    rect->left += offset;
    if (rect->left == max_value)
        rect->left = 44;
}

void creat_song(GLOBAL)
{
    opti->game_struct.music = malloc(sizeof(opti->game_struct.music->music) * 4);
    opti->game_struct.music[0].music = sfMusic_createFromFile("./content/no.wav");
    sfMusic_setVolume(opti->game_struct.music[0].music, opti->settings.msc.level);
}

void move_rect_less(sfIntRect *rect, int offset, int max_value)
{
    rect->left -= offset;
    if (rect->left == max_value)
        rect->left = 22;
}

void event_door(GLOBAL)
{
    if (sfKeyboard_isKeyPressed(sfKeyDown)) {
        printf("down\n");
        int x = PLAYER.x;
        int y = PLAYER.y;
        if (PLAYER.y == 835 && PLAYER.x >= 475 && PLAYER.x <= 495) {
            y = PLAYER.y = 928;
            int x = PLAYER.x = 485;
            sfVector2f pos = {x, y};
            sfSprite_setPosition(PLAYER.sprite, pos);
        }
    }
    if (sfKeyboard_isKeyPressed(sfKeyUp)) {
        printf("up\n");
        int x = PLAYER.x;
        int y = PLAYER.y;
        if (PLAYER.y == 928 && PLAYER.x >= 475 && PLAYER.x <= 495) {
            y = PLAYER.y = 835;
            int x = PLAYER.x = 485;
            sfVector2f pos = {x, y};
            sfSprite_setPosition(PLAYER.sprite, pos);
        }
    }
}

void event_player(GLOBAL)
{
    if (sfKeyboard_isKeyPressed(sfKeyLeft)) {
        printf("%d, %d\n", PLAYER.x, PLAYER.y);
        int x = PLAYER.x;
        if (PLAYER.x >= 78)
            x = PLAYER.x -= 6;
        else
            sfMusic_play(sfMusic_createFromFile("./content/no.wav"));
        int y = PLAYER.y;
        sfVector2f pos = {x, y};
        move_rect_less(&PLAYER.rect, 11, 0);
        sfSprite_setTextureRect(PLAYER.sprite, PLAYER.rect);
        sfSprite_setPosition(PLAYER.sprite, pos);
    } else if (sfKeyboard_isKeyPressed(sfKeyRight)) {

        printf("%d, %d\n", PLAYER.x, PLAYER.y);

        move_rect(&PLAYER.rect, 11, 66);

        int x = PLAYER.x;
        if (PLAYER.x <= 702)
            x = PLAYER.x += 6;
        else
            sfMusic_play(sfMusic_createFromFile("./content/no.wav"));
        int y = PLAYER.y;
        sfVector2f pos = {x, y};

        sfSprite_setPosition(PLAYER.sprite, pos);
        sfSprite_setTextureRect(PLAYER.sprite, PLAYER.rect);

    } else {
        PLAYER.rect = (sfIntRect) {33, 0, 11, 25};
        sfSprite_setTextureRect(PLAYER.sprite, PLAYER.rect);
    }

    if (PLAYER.x >= 336 && PLAYER.x <= 390) {
        if (sfKeyboard_isKeyPressed(sfKeyUp)) {
            printf("Up\n");
            int y = PLAYER.y;
            if (PLAYER.y == 835) {
                y = PLAYER.y = 700;
                int x = PLAYER.x = 330;
                sfVector2f pos = {x, y};
                sfSprite_setPosition(PLAYER.sprite, pos);
                sfMusic_play(sfMusic_createFromFile("./content/ascenseur.wav"));
            }
            if (PLAYER.y == 700 && PLAYER.x > 330) {
                y = PLAYER.y = 590;
                int x = PLAYER.x = 330;
                sfVector2f pos = {x, y};
                sfSprite_setPosition(PLAYER.sprite, pos);
                sfMusic_play(sfMusic_createFromFile("./content/ascenseur.wav"));
            }
            if (PLAYER.y == 590 && PLAYER.x > 330) {
                y = PLAYER.y = 480;
                int x = PLAYER.x = 330;
                sfVector2f pos = {x, y};
                sfSprite_setPosition(PLAYER.sprite, pos);
                sfMusic_play(sfMusic_createFromFile("./content/ascenseur.wav"));
            }
            if (PLAYER.y == 480 && PLAYER.x > 330) {
                y = PLAYER.y = 370;
                int x = PLAYER.x = 330;
                sfVector2f pos = {x, y};
                sfSprite_setPosition(PLAYER.sprite, pos);
                sfMusic_play(sfMusic_createFromFile("./content/ascenseur.wav"));
            }
            if (PLAYER.y == 370 && PLAYER.x > 330) {
                y = PLAYER.y = 263;
                int x = PLAYER.x = 330;
                sfVector2f pos = {x, y};
                sfSprite_setPosition(PLAYER.sprite, pos);
            }
        }
        // down
        if (sfKeyboard_isKeyPressed(sfKeyDown)) {
            printf("down\n");
            int y = PLAYER.y;
            if (PLAYER.y == 700) {
                y = PLAYER.y = 835;
                int x = PLAYER.x = 330;
                sfVector2f pos = {x, y};
                sfSprite_setPosition(PLAYER.sprite, pos);
            }
            if (PLAYER.y == 590 && PLAYER.x > 330) {
                y = PLAYER.y = 700;
                int x = PLAYER.x = 330;
                sfVector2f pos = {x, y};
                sfSprite_setPosition(PLAYER.sprite, pos);
            }
            if (PLAYER.y == 480 && PLAYER.x > 330) {
                y = PLAYER.y = 590;
                int x = PLAYER.x = 330;
                sfVector2f pos = {x, y};
                sfSprite_setPosition(PLAYER.sprite, pos);
            }
            if (PLAYER.y == 370 && PLAYER.x > 330) {
                y = PLAYER.y = 480;
                int x = PLAYER.x = 330;
                sfVector2f pos = {x, y};
                sfSprite_setPosition(PLAYER.sprite, pos);
            }
            if (PLAYER.y == 263 && PLAYER.x > 330) {
                y = PLAYER.y = 370;
                int x = PLAYER.x = 330;
                sfVector2f pos = {x, y};
                sfSprite_setPosition(PLAYER.sprite, pos);
                sfMusic_play(sfMusic_createFromFile("./content/ascenseur.wav"));
            }
            if (PLAYER.y == 835 && PLAYER.x == 492) {
                printf("jsuis la pelo");
                y = PLAYER.y = 860;
                int x = PLAYER.x = 492;
                sfVector2f pos = {x, y};
                sfSprite_setPosition(PLAYER.sprite, pos);
            }
        }
    }
    if (PLAYER.x >= 450 && PLAYER.x <= 515)
        event_door(opti);
    temps(0.05);
}

