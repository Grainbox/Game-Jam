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

void event_player(GLOBAL, window window, sfEvent *event)
{
    if (sfKeyboard_isKeyPressed(sfKeyLeft)) {
        printf("%d, %d\n", PLAYER.x, PLAYER.y);
        int x = PLAYER.x;
        if (PLAYER.x >= 78) {
            x = PLAYER.x -= 6;
        }
        int y = PLAYER.y;
        sfVector2f pos = {x, y};
        move_rect_less(&PLAYER.rect, 11, 0);
        sfSprite_setTextureRect(PLAYER.sprite, PLAYER.rect);
        sfSprite_setPosition(PLAYER.sprite, pos);
    } else if (sfKeyboard_isKeyPressed(sfKeyRight)) {

        printf("%d, %d\n", PLAYER.x, PLAYER.y);

        move_rect(&PLAYER.rect, 11, 66);

        int x = PLAYER.x;
        if (PLAYER.x <= 702) {
            x = PLAYER.x += 6;
        }
        int y = PLAYER.y;
        sfVector2f pos = {x, y};

        sfSprite_setPosition(PLAYER.sprite, pos);
        sfSprite_setTextureRect(PLAYER.sprite, PLAYER.rect);

    } else {
        PLAYER.rect = (sfIntRect) {33, 0, 11, 25};
        sfSprite_setTextureRect(PLAYER.sprite, PLAYER.rect);
    }
    temps(0.05);
}

