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
    PLAYER.rect = (sfIntRect) {33, 0, 11, 25};
    sfSprite_setTextureRect(PLAYER.sprite, PLAYER.rect);
}

void move_rect(sfIntRect *rect, int offset, int max_value)
{
    rect->left += offset;
    if (rect->left == max_value)
        rect->left = 0;
}

void event_player(GLOBAL, window window, sfEvent *event)
{
    
}

void open_game_window(GLOBAL)
{
    window window = create_window();
    create_player(opti);
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
