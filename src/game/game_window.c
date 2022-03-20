/*
** Tom Daniel, 2022
** Game-Jam
** File description:
** game_window
*/

#include "jam.h"

static window create_window(void)
{
    sfVideoMode m = { SCALE };
    char t[] = TITLE;
    sfRenderWindow *w = sfRenderWindow_create(m, t, sfClose, NULL);
    sfEvent event;
    window screen = {m, w, event, NULL, NULL, NULL, NULL, NULL, 0};

    screen = game_background(screen);
    sfRenderWindow_setFramerateLimit(screen.window, 60);
    return screen;
}

static void write_window(window window, GLOBAL)
{
    sfRenderWindow_clear(window.window, sfBlack);
    sfRenderWindow_drawSprite(window.window, window.sprite1, NULL);
    sfRenderWindow_drawSprite(window.window, opti->game_struct.player.sprite, NULL);
    sfRenderWindow_display(window.window);
}

int temps (float i)
{
    sfClock *clock;
    sfTime time;
    float seconds;
    clock = sfClock_create();
    while (1) {
        time = sfClock_getElapsedTime(clock);
        seconds = time.microseconds / 1000000.0;
        if (seconds > i) {
            return 0;
            sfClock_restart(clock);
        }
    }
}

void move_rect(sfIntRect *rect, int offset, int max_value)
{
    rect->left += offset;
    if (rect->left == max_value)
        rect->left = 44;
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
        if (PLAYER.x >= 78)
            x = PLAYER.x -= 6;
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

void open_game_window(GLOBAL)
{
    window window = create_window();
    create_sprite_player(opti);
    int event = 0;

    opti->game = window;
    while (sfRenderWindow_isOpen(window.window)) {
        check_game_event(opti, &event);
        write_window(window, opti);
        event_player(opti, window, &event);
        if (event == 1)
            break;
    }
    sfRenderWindow_destroy(window.window);
}
